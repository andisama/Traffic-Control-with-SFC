PROGRAM Traffic_Control
  VAR
    Start_PB : BOOL := FALSE;
    Stop_PB : BOOL := FALSE;
    Pedestrian_PB : BOOL := FALSE;
    STEP0_Action : BOOL := FALSE;
    STEP0_1Action : BOOL := FALSE;
    STEP1_Action : BOOL := FALSE;
    STEP2_Action : BOOL := FALSE;
  END_VAR
  VAR
    RED_Light AT %QX0.0 : BOOL := FALSE;
    YELLOW_Light AT %QX0.1 : BOOL := FALSE;
    GREEN_Light AT %QX0.2 : BOOL := FALSE;
  END_VAR
  VAR
    TON0 : TON;
    TON0_1 : TON;
    TON1 : TON;
    TON2 : TON;
    R_TRIG0 : R_TRIG;
    _TMP_OR20_OUT : BOOL;
  END_VAR

  INITIAL_STEP Step0:
    RED_Light(N);
    STEP0_Action(N);
    COMPUTE_FUNCTION_BLOCKS(S);
  END_STEP

  ACTION COMPUTE_FUNCTION_BLOCKS:
    TON0_1(IN := STEP0_1Action, PT := T#3s);
    TON0(IN := STEP0_Action, PT := T#8s);
    TON1(IN := STEP1_Action, PT := T#4s);
    R_TRIG0(CLK := Pedestrian_PB);
    _TMP_OR20_OUT := OR(TON1.Q, R_TRIG0.Q);
    TON2(IN := STEP2_Action, PT := T#3s);
  END_ACTION

  TRANSITION FROM Step0 TO Step0_1
    := TON0.Q;
  END_TRANSITION

  STEP Step0_1:
    RED_Light(N);
    YELLOW_Light(N);
    STEP0_1Action(N);
  END_STEP

  TRANSITION FROM Step0_1 TO Step1
    := TON0_1.Q;
  END_TRANSITION

  STEP Step1:
    GREEN_Light(N);
    STEP1_Action(N);
  END_STEP

  TRANSITION FROM Step1 TO Step2
    := _TMP_OR20_OUT;
  END_TRANSITION

  STEP Step2:
    YELLOW_Light(N);
    STEP2_Action(N);
  END_STEP

  TRANSITION FROM Step2 TO Step0
    := TON2.Q;
  END_TRANSITION

END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : Traffic_Control;
  END_RESOURCE
END_CONFIGURATION
