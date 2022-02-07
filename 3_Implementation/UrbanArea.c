/**
 * @file UrbanArea.c
 * @author Malakalapalli Nagendra
 * @brief  Calcuclation of Amount and Units Consumed for Urban Area
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "ElectricityBill.h"



void UrbanArea()
{
    float amount=0;
    E.Units_Consumed;
    if(E.Units_Consumed <=30 && E.Units_Consumed >= 0)
    {
        amount = E.Units_Consumed * 3.25; 
    }
    else if(E.Units_Consumed >= 31 && E.Units_Consumed <= 100)
    {
        amount = E.Units_Consumed * 4.70;
    }
    else if(E.Units_Consumed >= 101 && E.Units_Consumed <= 200)
    {
        amount = E.Units_Consumed * 6.25;
    }
    else
    {
        amount = E.Units_Consumed * 7.30;
    }

    printf(" \t\t\t\t\t\t\t\t\t ****** Domestic Electricity Bill****** \t\t\t\t\t \n\n");
    printf("Name : %s\n", E.Biller_Name);
    printf("Service Number : %d\n",E.Service_Number );
    printf("In Urban, your electricity bill is: %f\n", amount);
    printf("Units you consumed per month: %d\n", E.Units_Consumed);
}