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
#include "ElectricityBill.h"
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
		printf(" \t\t\t\t\t\t  ****** Domestic Electricity Bill****** \t\t\t\t\t\t\t \n");
		printf("Select enter your choice (1-2):\n");
		printf("1. RURAL \n");
		printf("2. URBAN \n");
		printf("3. EXIT\n");
		printf("Electricity Board Helpline: 8435 2340\n");
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
			printf("PLEASE CHOOSE FROM 1 or 2\n");
		}
		//getch();
	} while (option != 3);

}
  