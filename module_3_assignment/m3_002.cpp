/*
2).	Write a program to make Simple calculator (to make addition, subtraction,
	multiplication, division and modulo)
*/

#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g;
	
	printf("\nEnter the value of a:");
	scanf("%d",&a);
	
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	
	c=a+b;
	printf("\n\nSum of %d and %d is %d",a,b,c);
	
	d=a-b;
	printf("\nsubstraction of %d and %d is %d",a,b,d);
	
	e=a*b;
	printf("\nMultiplication of %d and %d is %d",a,b,e);
	
	f=a/b;
	printf("\nDivision of %d and %d is %d",a,b,f);
	
	g=a%b;
	printf("\nModulo of %d and %d is %d",a,b,g);
	
	return 0;
}










