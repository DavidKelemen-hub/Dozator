/******************************************************************************
 *  File Name:    Input_Init.cpp
 *  Description:  Initializes all digital/analog inputs used in the project
 *  
 *  Author:       BitBangerz
 *  Date:         05.31.2025
 *  Version:      1.0
 *
 *  Notes:
 *    
 *****************************************************************************/

/* Includes */
#include "Arduino.h"
#include "inc/Main.h"
#include "inc/Pin_Input.h"
/* Includes */

/* Defines */

/* Defines */

/***************************************************************************** */

/* Global variables */

/* Global variables */

void pin_inputs_init()
{

  /* define here all input and output pins */
  pinMode(POTMETER_PIN,INPUT);
 
}

void pin_inputs_cyclic()
{
  /* Read inputs cyclically and store values in global buffer */
  global_buffer.potmeter_sensorRead = analogRead(POTMETER_PIN);
}