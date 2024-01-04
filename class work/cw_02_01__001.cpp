/*
class work 
02_01_2024
*/

#include<stdio.h>

// declaration of function
void area_of_circle();  		// without return value , without arguments

int main(){
	
	// function calling
	area_of_circle();
	printf("\n Function called");
}

// function defination
void area_of_circle(){
	float r,area;
	printf("\n Enter the value of radious : ");
	scanf("%f",&r);
	area= 3.14*r*r;
	printf("\n area is %f ",area);
}


