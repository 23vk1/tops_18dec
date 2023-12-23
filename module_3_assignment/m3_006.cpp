/*
6). Find area of Triangle, Formula : A = 1/2 × b × h
*/
#include<stdio.h>
int main(){
	float A,b,h; // A = Areea, b = base, h= height

	printf("Enter the value of base of triangel : ");
	scanf("%f",&b);
	
	printf("Enter the value of height of triangel : ");
	scanf("%f",&h);	
	
	A = (h*b)/2;  // formula
	printf("Area of triangle is : %f",A);
	
}








