/**
 * @file Information.c
 * @author Malakalapalli Nagendra
 * @brief Biller Information
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


void Information()
{
    printf("\t\t\t ****** Welcome to Souther Power Distribution company of Andhra Pradesh Limited******\n");
	printf("\t\t\t\t\t\t\t Enter the Biller Details\n ");
    printf("Enter your  Location :\n");
	scanf("%s", E.Location);
	printf("Enter your  Biller Name:\n");
	scanf("%s", E.Biller_Name);
	printf("Enter your Service Number:\n");
	scanf("%d", &E.Service_Number);
	printf("Enter the Mobile Number : \n");
    scanf("%d", E.Mobile_Number);
    printf("Enter Biller Mail ID :\n");
    scanf("%s", E.Biller_Mail);
    printf("Enter the permanent address :\n");
    scanf("%s", E.Biller_Address);
    printf("Enter Units Consumed:\n");
	scanf("%f", &E.Units_Consumed);
	
    
}