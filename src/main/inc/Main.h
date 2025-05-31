#include "Std_Types.h"

/* Define inputs */
#define POTMETER_PIN A0

typedef struct 
{
    uint8 milliLiters;
    uint16 potmeter_sensorRead;
}Global_Buffer;

extern Global_Buffer global_buffer;