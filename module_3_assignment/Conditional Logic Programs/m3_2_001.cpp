/*
1. Write a C program to accept two integers and check whether they are equal
or not
*/

#include<stdio.h>
int main (){
	
	int a,b;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	if(a==b){
		printf("\nvalue of a and b is equal");
	}else{
		printf("value of a and b is different");
	}
	
}

