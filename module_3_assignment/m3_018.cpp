/*
18).	Calculate person’s Annual salary
*/

#include<stdio.h>
int main(){
	int MS, AS;  // MS = monthly salary and AS = Annnual salary
	
	
	printf("\n Enter your monthly salary : ");
	scanf("%d",&MS);
	
	AS = MS*12;		// Annual salary is 12 times Monthly salary 
	
	printf("\n Your Annual salary is %d",AS);
	
}


