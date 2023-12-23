/*
17).	Calculate person’s insurance premium based on salary
*/

#include<stdio.h>
int main(){
	int S; // S = salary
	float P; // P = Premium
	
	printf("\n Enter Salary : ");
	scanf("%d",&S);
	
	P = S/10;   // premium is 10% of the salary 
	printf("\n Premium you have to pay is %f",P);
	
}

	
	
	
	
