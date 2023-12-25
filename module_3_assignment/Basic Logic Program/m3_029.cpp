/*
29).	Convert minutes into seconds and hours
*/

#include<stdio.h>
int main(){
	int m,s,h,mod;
	
	printf("\n Enter minuts :");
	scanf("%d",&m);
	
	s = m*60; 		// calculate seconds
	h = m/60;		// calculate hours
	mod = m%60;		// calculate remaining minuts
	
	printf("\n %d minuts is equals %d seconds or %d hours and %d minuts",m,s,h,mod);
		
}

