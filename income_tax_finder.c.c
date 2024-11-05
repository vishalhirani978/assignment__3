/*4. Income Tax Calculator
? Problem: Write a program that calculates income tax based on the following criteria:
o Income up to 250,000: No tax.
o Income from 250,001 to 500,000: 5% tax.
o Income from 500,001 to 1,000,000: 10% tax.
o Income above 1,000,000: 15% tax.
? Concepts Used: Nested if-else, arithmetic operations*/
#include<stdio.h>
int main (){
	int Income ;
	float tax;
	printf("enter your your income:");
	scanf("%d",&Income);
	if(Income<=250000){
	tax = 0;
	printf("no tax");
	}else if(Income<=500000){
		tax =(Income-250000)*0.05;
		printf("the tax is %f:",tax);
	}else if(Income<=1000000){
		tax = (250000*0.05 ) +(Income-500000)*0.10;
		printf("the tax is %f:",tax);
	}else{
	
		tax =(250000*0.05 ) +(500000*0.10) +(Income-1000000)*0.15;
		printf("the tax is %f:",tax);
	}
}
