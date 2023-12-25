/*
26).	Convert temperature Fahrenheit to Celsius
*/

#include<stdio.h>
#include<math.h>
int main(){
	int F; 		// F = Fahrenheit
	float c;	// c = celsious
	
	printf("\n Enter temperature in Fahrenheit : ");
	scanf("%d",&F);
	
	c = (F-32)*5.0/9;		// formula to convert fahranheit to celsious
	
	printf("\n Temperature in celsious is : %f°",c);
	
	
}


