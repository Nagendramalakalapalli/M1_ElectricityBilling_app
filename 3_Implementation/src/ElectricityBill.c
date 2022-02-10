/**
 * @file ElectricityBill.c
 * @author Malakalapalli Nagendra
 * @brief  Main Function 
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ElectricBill.h"
#include "RuralArea.h"
#include "UrbanArea.h"
#include "Information.h"

void RuralArea();
void UrbanArea();

void main()
{ 
	Information();
	int option;
	do
	{
		printf(" \t\t\t****** Welcome to Souther Power Distribution company of Andhra Pradesh Limited******\t\t \n\n");
		printf("Select enter your choice (1-2):\n");
		printf("1. RURAL \n");
		printf("2. URBAN \n");
		printf("3. EXIT\n");
		printf("Electricity Board Helpline: 1800425155333 (or) 1912.\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			RuralArea();
			break;
		case 2:
			UrbanArea();
			break;
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("Please Contact the helpline");
			printf("Electricity Board Helpline: 1800425155333 (or) 1912.\n");
		}
	
	} while (option != 3);

}
  