/*
 * File: Automated_IrrigationControlSystem.h
 *
 * Code generated for Simulink model 'Automated_IrrigationControlSystem'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Feb 25 17:07:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Automated_IrrigationControlSystem_h_
#define RTW_HEADER_Automated_IrrigationControlSystem_h_
#ifndef Automated_IrrigationControlSystem_COMMON_INCLUDES_
#define Automated_IrrigationControlSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                  /* Automated_IrrigationControlSystem_COMMON_INCLUDES_ */

#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#define Automated_IrrigationControlSystem_M (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Model entry point functions */
extern void Automated_IrrigationControlSystem_initialize(void);
extern void Automated_IrrigationControlSystem_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Sine Wave' : Unused code path elimination
 * Block '<S1>/AND' : Unused code path elimination
 * Block '<S2>/Compare' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S3>/Compare' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Automated_IrrigationControlSystem'
 * '<S1>'   : 'Automated_IrrigationControlSystem/Subsystem'
 * '<S2>'   : 'Automated_IrrigationControlSystem/Subsystem/Compare To Constant'
 * '<S3>'   : 'Automated_IrrigationControlSystem/Subsystem/Compare To Constant1'
 */
#endif                     /* RTW_HEADER_Automated_IrrigationControlSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
