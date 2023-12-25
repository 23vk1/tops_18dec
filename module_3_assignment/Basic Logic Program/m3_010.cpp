/*
10). find the area of a rectangular prism, formula : A=2(wl+hl+hw)
*/

#include<stdio.h>
int main(){
	
	float A,w,l,h;  // A = area of a rectangular prism, w = width, l = length, h = height
	
	printf("Enter width : ");
	scanf("%f",&w);
	
	printf("Enter length : ");
	scanf("%f",&l);
	
	printf("Enter height : ");
	scanf("%f",&h);	
	
	A = 2*(w*l+h*l+h*w);  // formula
	
	printf("Area of a recangular prism is : %f",A);
	
}


