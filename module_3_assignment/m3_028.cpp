/*
28).	Convert years into days and months
*/


#include<stdio.h>
int main(){
	int m,d,y;
	
	printf("\n Enter number of years : ");
	scanf("%d",&y);
	
	d = y*365;		// to calculate days
	m = y*12;		// to calculate months
	
	printf("\n %d year is equals %d months or %d days",y,m,d);
	

}
