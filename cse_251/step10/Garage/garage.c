#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "GarageLib.h"
/* 
 * Name: <Deer>
 * 
 * 
 */

int main()
{
    printf("Garage Startup\n");
    GarageStartup();


    while(IsGarageRunning())
    {


    }

    printf("Garage Shutdown\n");
    GarageShutdown();
    return 0;
}

