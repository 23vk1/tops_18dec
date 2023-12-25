/*
27).	Convert days into months
*/

#include<stdio.h>
int main(){
	int m,d,mod;
	
	printf("\n Enter number of days : ");
	scanf("%d",&d);
	
	m = d/30;		// to calculate month
	mod = d%30;		// to calculate ramaining days
	
	printf("\n %d days is equals %d months and %d days",d,m,mod);
	

}



