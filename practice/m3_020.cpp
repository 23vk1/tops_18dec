/*
20).	Accept monthly salary from the user and deduct 10% insurance premium,
		10% loan installment find out of remaining salary.
*/

#include<stdio.h>
int main(){
	int MN,IP,LI,RS; 		// MN = monthly salary, IP = insurance premium, LI = loan installment, RS = remaining salary
	
	printf("\n Enter monthly salary : ");
	scanf("%d",&MN);
	
	IP = MN/10;			// formula to find Insurance premium
	LI = MN/10;			// formula to find loan installment

	printf("\n Insurance premium is : %d",IP);
	printf("\n Loan installment is : %d",LI);
	
	RS = MN - IP - LI;	// Formula to find remaining salary	
	printf("\n Remaining slaary is : %d",RS);
	
	
}














