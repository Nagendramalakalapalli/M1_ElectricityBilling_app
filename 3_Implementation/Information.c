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
#include <Windows.h>
#include "ElectricityBill.h"


void Information()
{
    printf("Enter your  Location :\n");
	scanf("%s", E.Location);
	printf("Enter your  Biller Name:\n");
	scanf("%s", E.Biller_Name);
	printf("Enter the Mobile Number : \n");
    scanf("%s", E.Mobile_Number);
    printf("Enter Biller Mail ID :\n");
    scanf("%s", E.Biller_Mail);
    printf("Enter the permanent address :\n");
    scanf("%s", E.Biller_Address);
    printf("Enter your Service Number:\n");
	scanf("%d", &E.Service_Number);
    printf("Enter Units Consumed:\n");
	scanf("%f", &E.Units_Consumed);
	
    
}