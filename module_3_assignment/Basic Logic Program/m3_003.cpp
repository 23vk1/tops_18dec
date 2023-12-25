/*
3).	WAP to Find Area And Circumference of Circle
*/

#include<stdio.h>
int main(){
	float A,r,pi,C ;  // A = area, r= radious, C = Circumference
	
	printf("Enter the value of Radious :");
	scanf("%f",&r);
	
	
	pi=3.14;
	A=pi*r*r;
	printf("\nthe area of circle is %f",A);
	
	
	C=2*pi*r;
	printf("\nthe circumference of circle is %f",C);	
	
	
	
}

