/******************************************************************************
 *  File Name:    main.ino
 *  Description:  Main file of the project
 *  
 *  Author:       BitBangerz
 *  Date:         05.31.2025
 *  Version:      1.0
 *
 *  Notes:
 *    
 *****************************************************************************/

/* Includes */
#include "inc/Main.h"
#include "inc/Pin_Input.h"
#include "inc/Lights.h"
#include "inc/Display.h"
#include "inc/ServoMotor.h"
#include "inc/InputHandler.h"
/* Includes */

/* **************************************************************************** */

/* Defines */

/* Defines */

/* **************************************************************************** */

/* Global variables */
Global_Buffer global_buffer;
/* Global variables */

void setup() 
{
  Serial.begin(115200);
  pin_inputs_init();
  input_handler_init();
  lights_init();
  display_init();
  servomotor_init();
}

void loop() 
{
  pin_inputs_cyclic();
  input_handler_cyclic();
  lights_cyclic();
  display_cyclic();
  servomotor_cyclic();
}
