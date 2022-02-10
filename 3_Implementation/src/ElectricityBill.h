#ifndef _ElectricityBill_H_
#define _ElectricityBill_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct ElectricBill
{
	char Location[100];
	char Biller_Name[30];
	int Service_Number;
    int Mobile_Number[10];
	char Biller_Mail[100];
	char Biller_Address[100];
	float Units_Consumed;
	
	
};
struct ElectricBill E;
#endif
