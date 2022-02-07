#ifndef __ElectricityBill_H__
#define __ElectricityBill_H__

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>


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
#endif
