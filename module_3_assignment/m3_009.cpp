/*
9). Find circumference of Triangle formula : triangle = a + b + c
*/

#include<stdio.h>
int main(){
	float Triangle,a,b,c;  // Triangle = circumference of triangle and a,b,c is side of triangle 
	
	printf("Enter the value of side A : ");
	scanf("%f",&a);
	
	printf("Enter the value of side B : ");
	scanf("%f",&b);	
	
	printf("Enter the value of side C : ");
	scanf("%f",&c);
	
	Triangle = a+b+c;  // formula
	
	printf("the circumference of triangle is %f",Triangle);
	
}






