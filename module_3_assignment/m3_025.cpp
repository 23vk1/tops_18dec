/*
25.		Accept 5 expense from user and find average of expense
*/

#include<stdio.h>
#include<string.h>
int main(){
	int s1,s2,s3,s4,s5,total;		// varible to accept expense
	float avg;
	
	printf("\n Enter your food expense : ");
	scanf("%d",&s1);

	printf("\n Enter your rental expense : ");
	scanf("%d",&s2);

	printf("\n Enter your vehicle expense : ");
	scanf("%d",&s3);

	printf("\n Enter school expense : ");
	scanf("%d",&s4);

	printf("\n Enter clothing expense : ");
	scanf("%d",&s5);

	total = s1+s2+s3+s4+s5;		// total
	avg = total/5;				// average formula

	printf("\n Average of your expense is %f",avg);
	printf("\n Your total expense is %d",total);
	

	
}

