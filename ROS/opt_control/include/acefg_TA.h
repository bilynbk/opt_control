/*
 * Student License - for use by students to meet course requirements and
 * perform academic research at degree granting institutions only.  Not
 * for government, commercial, or other organizational use.
 *
 * acefg_TA.h
 *
 * Code generation for function 'acefg_TA'
 *
 */

#ifndef ACEFG_TA_H
#define ACEFG_TA_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "opt_control_lib_types.h"

/* Function Declarations */
extern void acefg_TA(double P_init, double V_init, double A_init, double P_wayp,
                     double V_wayp, double A_wayp, double J_max, double J_min,
                     double T, creal_T t_data[], int t_size[2]);

#endif

/* End of code generation (acefg_TA.h) */
