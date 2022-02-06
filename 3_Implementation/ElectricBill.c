/**
 * @file ElectricBill.c
 * @author Malakalapalli Nagendra
 * @brief Electricity Bill Calculator
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>



struct ElectricBill
{
	char Location[100];
	char Biller_Name[30];
	int Service_Number;
    float Units_Consumed;
    int Mobile_Number[10];
	char Biller_Mail[100];
	char Biller_Address[100];
	
	
};
struct ElectricBill E;

/**
 * @brief Information of Biller
 * 
 */

void info()
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

/**
 * @brief  Rural Area bill calculation according to units consumed
 * 
 */

void Rural()
{
    float amount=0;
    E.Units_Consumed;
    if(E.Units_Consumed <=30 && E.Units_Consumed >= 0)
    {
        amount = E.Units_Consumed * 3.15; //3.15 is rupees
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
   printf(" \t\t\t\t\t\t\t ****** Domestic Electricity Bill****** \t\t\t\t\t \n\n");
    printf("Name : %s\n", E.Biller_Name);
    printf("Service Number : %d\n",E.Service_Number );
    printf("In Rural, your electricity bill is: %f\n", amount);
    printf("Units you consumed per month: %d\n", E.Units_Consumed);
 
}

/**
 * @brief Urban Area bill calculation according to units consumed
 * 
 */

void Urban()
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
/**
 * @brief Main Function
 * 
 * @return int 
 */

int main()
{ 
	info();
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
			Rural();
			break;
		case 2:
			Urban();
			break;
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE FROM 1 or 2\n");
		}
		getch();
	} while (option != 3);
}
  
