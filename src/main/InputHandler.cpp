/******************************************************************************
 *  File Name:    InputHandler.cpp
 *  Description:  Source file for logic handling of sensor inputs.
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
#include "inc/InputHandler.h"
/* Includes */

/* Defines */
#define MILLILITER_MIN 0U
#define MILLILITER_MAX 50U
#define ADC_MAX_READ 1024U
#define ADC_MIN_READ 0U
/* Defines */

/* **************************************************************************** */

/* Global variables */

/* Global variables */


/* **************************************************************************** */

/* Exported functions */
void input_handler_init(void)
{
    /* init function for input_handler module */
}

/*********************************************** Potentiometer /************************************************/
static uint16 Read_Analog_PotMeter()
{
    return global_buffer.potmeter_sensorRead;
}

static uint8 Calculate_Display_Value_ML()
{
    uint8 retVal = 0u;
    uint8 potmeter_value = 0u;

    potmeter_value = Read_Analog_PotMeter();
    retVal = map(potmeter_value,ADC_MIN_READ,ADC_MAX_READ,MILLILITER_MIN,MILLILITER_MAX);

    return retVal;
}

/*********************************************** Potentiometer /************************************************/

static void Update_Global_Buffer()
{
    global_buffer.milliLiters = Calculate_Display_Value_ML();
}

void input_handler_cyclic(void)
{
   Update_Global_Buffer();
}
