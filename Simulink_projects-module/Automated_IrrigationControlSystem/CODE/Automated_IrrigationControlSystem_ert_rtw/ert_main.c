/*
 * File: ert_main.c
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

#include "Automated_IrrigationControlSystem.h"
#include "rtwtypes.h"
#include "MW_target_hardware_resources.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  Automated_IrrigationControlSystem_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.001;
  float systemClock = 0;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(rtM, 0);
  Automated_IrrigationControlSystem_initialize();
  cli();
  configureArduinoAVRTimer();
  runModel = rtmGetErrorStatus(rtM) == (NULL);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei ();
  while (runModel) {
    stopRequested = !(rtmGetErrorStatus(rtM) == (NULL));
    runModel = !(stopRequested);
    MW_Arduino_Loop();
  }

  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
