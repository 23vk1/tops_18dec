/*
class work
04_01_2024
*/

#include<stdio.h>
void myfun();
int b=50;			// global variable 

int main(){
	int a=60; 		// local variable 
	printf("\n(in main) b = %d",b);
	b=30;
	printf("\n(in main) b = %d",b);
	myfun();
	printf("\n(in main) b = %d",b);
	printf("\n(in main) a = %d",a);
}

void myfun(){
	int a=20;		// local variable
	printf("\n b = %d",b);
	b=100;
	printf("\n b = %d",b);
	printf("\n a = %d",a);
}


