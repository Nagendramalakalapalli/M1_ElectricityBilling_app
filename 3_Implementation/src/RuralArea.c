/**
 * @file RuralArea.c
 * @author Malakalapalli Nagendra
 * @brief Calcuclation of Amount and Units Consumed for Rural Area
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ElectricBill.h"


void RuralArea()
{
    float amount=0;
    E.Units_Consumed;
    if(E.Units_Consumed>= 0  &&  E.Units_Consumed <=30)
    {
        amount = E.Units_Consumed * 3.15; 
    }
    else if(E.Units_Consumed >= 31 && E.Units_Consumed <= 100)
    {
        amount = E.Units_Consumed * 4.40;
    }
    else if(E.Units_Consumed >= 101 && E.Units_Consumed <= 200)
    {
        amount = E.Units_Consumed * 5.95;
    }
    else
    {
        amount = E.Units_Consumed * 6.80;
    }
    printf(" \t\t\t****** Welcome to Souther Power Distribution company of Andhra Pradesh Limited******\t\t \n\n");
    printf("Name : %s\n", E.Biller_Name);
    printf("Service Number : %d\n",E.Service_Number );
    printf("In Rural, your electricity bill is: %f\n", amount);

 
}