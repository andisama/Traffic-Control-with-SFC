void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void TRAFFIC_CONTROL_init__(TRAFFIC_CONTROL *data__, BOOL retain) {
  __INIT_VAR(data__->START_PB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STOP_PB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PEDESTRIAN_PB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STEP0_ACTION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STEP0_1ACTION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STEP1_ACTION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STEP2_ACTION,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RED_LIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->YELLOW_LIGHT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GREEN_LIGHT,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON0_1,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  R_TRIG_init__(&data__->R_TRIG0,retain);
  __INIT_VAR(data__->_TMP_OR20_OUT,__BOOL_LITERAL(FALSE),retain)
  UINT i;
  data__->__nb_steps = 4;
  static const STEP temp_step = {{0, 0}, 0, {{0, 0}, 0}};
  for(i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i] = temp_step;
  }
  __SET_VAR(data__->,__step_list[0].X,,1);
  data__->__nb_actions = 8;
  static const ACTION temp_action = {0, {0, 0}, 0, 0, {0, 0}, {0, 0}};
  for(i = 0; i < data__->__nb_actions; i++) {
    data__->__action_list[i] = temp_action;
  }
  data__->__nb_transitions = 4;
  data__->__lasttick_time = __CURRENT_TIME;
}

// Steps definitions
#define STEP0 __step_list[0]
#define __SFC_STEP0 0
#define STEP0_1 __step_list[1]
#define __SFC_STEP0_1 1
#define STEP1 __step_list[2]
#define __SFC_STEP1 2
#define STEP2 __step_list[3]
#define __SFC_STEP2 3

// Actions definitions
#define __SFC_COMPUTE_FUNCTION_BLOCKS 0
#define __SFC_RED_LIGHT 1
#define __SFC_STEP0_ACTION 2
#define __SFC_YELLOW_LIGHT 3
#define __SFC_STEP0_1ACTION 4
#define __SFC_GREEN_LIGHT 5
#define __SFC_STEP1_ACTION 6
#define __SFC_STEP2_ACTION 7

// Code part
void TRAFFIC_CONTROL_body__(TRAFFIC_CONTROL *data__) {
  // Initialise TEMP variables

  INT i;
  TIME elapsed_time, current_time;

  // Calculate elapsed_time
  current_time = __CURRENT_TIME;
  elapsed_time = __time_sub(current_time, data__->__lasttick_time);
  data__->__lasttick_time = current_time;
  // Transitions initialization
  if (__DEBUG) {
    for (i = 0; i < data__->__nb_transitions; i++) {
      data__->__transition_list[i] = data__->__debug_transition_list[i];
    }
  }
  // Steps initialization
  for (i = 0; i < data__->__nb_steps; i++) {
    data__->__step_list[i].prev_state = __GET_VAR(data__->__step_list[i].X);
    if (__GET_VAR(data__->__step_list[i].X)) {
      data__->__step_list[i].T.value = __time_add(data__->__step_list[i].T.value, elapsed_time);
    }
  }
  // Actions initialization
  for (i = 0; i < data__->__nb_actions; i++) {
    __SET_VAR(data__->,__action_list[i].state,,0);
    data__->__action_list[i].set = 0;
    data__->__action_list[i].reset = 0;
    if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].set_remaining_time = __time_sub(data__->__action_list[i].set_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].set_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].set = 1;
      }
    }
    if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) > 0) {
      data__->__action_list[i].reset_remaining_time = __time_sub(data__->__action_list[i].reset_remaining_time, elapsed_time);
      if (__time_cmp(data__->__action_list[i].reset_remaining_time, __time_to_timespec(1, 0, 0, 0, 0, 0)) <= 0) {
        data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
        data__->__action_list[i].reset = 1;
      }
    }
  }

  // Transitions fire test
  if (__GET_VAR(data__->STEP0.X)) {
    __SET_VAR(data__->,__transition_list[0],,__GET_VAR(data__->TON0.Q,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->__transition_list[0]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[0],,__GET_VAR(data__->TON0.Q,));
    }
    __SET_VAR(data__->,__transition_list[0],,0);
  }
  if (__GET_VAR(data__->STEP0_1.X)) {
    __SET_VAR(data__->,__transition_list[1],,__GET_VAR(data__->TON0_1.Q,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->__transition_list[1]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[1],,__GET_VAR(data__->TON0_1.Q,));
    }
    __SET_VAR(data__->,__transition_list[1],,0);
  }
  if (__GET_VAR(data__->STEP1.X)) {
    __SET_VAR(data__->,__transition_list[2],,__GET_VAR(data__->_TMP_OR20_OUT,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->__transition_list[2]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[2],,__GET_VAR(data__->_TMP_OR20_OUT,));
    }
    __SET_VAR(data__->,__transition_list[2],,0);
  }
  if (__GET_VAR(data__->STEP2.X)) {
    __SET_VAR(data__->,__transition_list[3],,__GET_VAR(data__->TON2.Q,));
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->__transition_list[3]));
    }
  }
  else {
    if (__DEBUG) {
      __SET_VAR(data__->,__debug_transition_list[3],,__GET_VAR(data__->TON2.Q,));
    }
    __SET_VAR(data__->,__transition_list[3],,0);
  }

  // Transitions reset steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP0_1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP1.X,,0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP2.X,,0);
  }

  // Transitions set steps
  if (__GET_VAR(data__->__transition_list[0])) {
    __SET_VAR(data__->,STEP0_1.X,,1);
    data__->STEP0_1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[1])) {
    __SET_VAR(data__->,STEP1.X,,1);
    data__->STEP1.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[2])) {
    __SET_VAR(data__->,STEP2.X,,1);
    data__->STEP2.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }
  if (__GET_VAR(data__->__transition_list[3])) {
    __SET_VAR(data__->,STEP0.X,,1);
    data__->STEP0.T.value = __time_to_timespec(1, 0, 0, 0, 0, 0);
  }

  // Steps association
  // STEP0 action associations
  {
    char active = __GET_VAR(data__->STEP0.X);
    char activated = active && !data__->STEP0.prev_state;
    char desactivated = !active && data__->STEP0.prev_state;

    if (active)       {__SET_VAR(data__->,RED_LIGHT,,1);};
    if (desactivated) {__SET_VAR(data__->,RED_LIGHT,,0);};

    if (active)       {__SET_VAR(data__->,STEP0_ACTION,,1);};
    if (desactivated) {__SET_VAR(data__->,STEP0_ACTION,,0);};

    if (active)       {data__->__action_list[__SFC_COMPUTE_FUNCTION_BLOCKS].set = 1;}

  }

  // STEP0_1 action associations
  {
    char active = __GET_VAR(data__->STEP0_1.X);
    char activated = active && !data__->STEP0_1.prev_state;
    char desactivated = !active && data__->STEP0_1.prev_state;

    if (active)       {__SET_VAR(data__->,RED_LIGHT,,1);};
    if (desactivated) {__SET_VAR(data__->,RED_LIGHT,,0);};

    if (active)       {__SET_VAR(data__->,YELLOW_LIGHT,,1);};
    if (desactivated) {__SET_VAR(data__->,YELLOW_LIGHT,,0);};

    if (active)       {__SET_VAR(data__->,STEP0_1ACTION,,1);};
    if (desactivated) {__SET_VAR(data__->,STEP0_1ACTION,,0);};

  }

  // STEP1 action associations
  {
    char active = __GET_VAR(data__->STEP1.X);
    char activated = active && !data__->STEP1.prev_state;
    char desactivated = !active && data__->STEP1.prev_state;

    if (active)       {__SET_VAR(data__->,GREEN_LIGHT,,1);};
    if (desactivated) {__SET_VAR(data__->,GREEN_LIGHT,,0);};

    if (active)       {__SET_VAR(data__->,STEP1_ACTION,,1);};
    if (desactivated) {__SET_VAR(data__->,STEP1_ACTION,,0);};

  }

  // STEP2 action associations
  {
    char active = __GET_VAR(data__->STEP2.X);
    char activated = active && !data__->STEP2.prev_state;
    char desactivated = !active && data__->STEP2.prev_state;

    if (active)       {__SET_VAR(data__->,YELLOW_LIGHT,,1);};
    if (desactivated) {__SET_VAR(data__->,YELLOW_LIGHT,,0);};

    if (active)       {__SET_VAR(data__->,STEP2_ACTION,,1);};
    if (desactivated) {__SET_VAR(data__->,STEP2_ACTION,,0);};

  }


  // Actions state evaluation
  for (i = 0; i < data__->__nb_actions; i++) {
    if (data__->__action_list[i].set) {
      data__->__action_list[i].set_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 1;
    }
    if (data__->__action_list[i].reset) {
      data__->__action_list[i].reset_remaining_time = __time_to_timespec(1, 0, 0, 0, 0, 0);
      data__->__action_list[i].stored = 0;
    }
    __SET_VAR(data__->,__action_list[i].state,,__GET_VAR(data__->__action_list[i].state) | data__->__action_list[i].stored);
  }

  // Actions execution
  if (data__->__action_list[__SFC_RED_LIGHT].reset) {
    __SET_VAR(data__->,RED_LIGHT,,0);
  }
  else if (data__->__action_list[__SFC_RED_LIGHT].set) {
    __SET_VAR(data__->,RED_LIGHT,,1);
  }
  if (data__->__action_list[__SFC_STEP0_ACTION].reset) {
    __SET_VAR(data__->,STEP0_ACTION,,0);
  }
  else if (data__->__action_list[__SFC_STEP0_ACTION].set) {
    __SET_VAR(data__->,STEP0_ACTION,,1);
  }
  if (data__->__action_list[__SFC_YELLOW_LIGHT].reset) {
    __SET_VAR(data__->,YELLOW_LIGHT,,0);
  }
  else if (data__->__action_list[__SFC_YELLOW_LIGHT].set) {
    __SET_VAR(data__->,YELLOW_LIGHT,,1);
  }
  if (data__->__action_list[__SFC_STEP0_1ACTION].reset) {
    __SET_VAR(data__->,STEP0_1ACTION,,0);
  }
  else if (data__->__action_list[__SFC_STEP0_1ACTION].set) {
    __SET_VAR(data__->,STEP0_1ACTION,,1);
  }
  if (data__->__action_list[__SFC_GREEN_LIGHT].reset) {
    __SET_VAR(data__->,GREEN_LIGHT,,0);
  }
  else if (data__->__action_list[__SFC_GREEN_LIGHT].set) {
    __SET_VAR(data__->,GREEN_LIGHT,,1);
  }
  if (data__->__action_list[__SFC_STEP1_ACTION].reset) {
    __SET_VAR(data__->,STEP1_ACTION,,0);
  }
  else if (data__->__action_list[__SFC_STEP1_ACTION].set) {
    __SET_VAR(data__->,STEP1_ACTION,,1);
  }
  if (data__->__action_list[__SFC_STEP2_ACTION].reset) {
    __SET_VAR(data__->,STEP2_ACTION,,0);
  }
  else if (data__->__action_list[__SFC_STEP2_ACTION].set) {
    __SET_VAR(data__->,STEP2_ACTION,,1);
  }
  if(__GET_VAR(data__->__action_list[__SFC_COMPUTE_FUNCTION_BLOCKS].state)) {
    __SET_VAR(data__->TON0_1.,IN,,__GET_VAR(data__->STEP0_1ACTION,));
    __SET_VAR(data__->TON0_1.,PT,,__time_to_timespec(1, 0, 3, 0, 0, 0));
    TON_body__(&data__->TON0_1);
    __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->STEP0_ACTION,));
    __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 8, 0, 0, 0));
    TON_body__(&data__->TON0);
    __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->STEP1_ACTION,));
    __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
    TON_body__(&data__->TON1);
    __SET_VAR(data__->R_TRIG0.,CLK,,__GET_VAR(data__->PEDESTRIAN_PB,));
    R_TRIG_body__(&data__->R_TRIG0);
    __SET_VAR(data__->,_TMP_OR20_OUT,,OR__BOOL__BOOL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)2,
      (BOOL)__GET_VAR(data__->TON1.Q,),
      (BOOL)__GET_VAR(data__->R_TRIG0.Q,)));
    __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->STEP2_ACTION,));
    __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 3, 0, 0, 0));
    TON_body__(&data__->TON2);
  }



  goto __end;

__end:
  return;
} // TRAFFIC_CONTROL_body__() 

// Steps undefinitions
#undef STEP0
#undef __SFC_STEP0
#undef STEP0_1
#undef __SFC_STEP0_1
#undef STEP1
#undef __SFC_STEP1
#undef STEP2
#undef __SFC_STEP2

// Actions undefinitions
#undef __SFC_COMPUTE_FUNCTION_BLOCKS
#undef __SFC_RED_LIGHT
#undef __SFC_STEP0_ACTION
#undef __SFC_YELLOW_LIGHT
#undef __SFC_STEP0_1ACTION
#undef __SFC_GREEN_LIGHT
#undef __SFC_STEP1_ACTION
#undef __SFC_STEP2_ACTION





