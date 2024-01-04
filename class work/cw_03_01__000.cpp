/*
class work
03_01_2024__functions
*/

#include<stdio.h>
// function declaration
int sum_of_two();			// with return type, without arguments

int main(){
	int ans;
	// function calling
	ans=sum_of_two();
	printf("\n Sum is %d",ans);		
}

int sum_of_two(){
	int a,b,c;
	printf("\n ENter the value of a and b : ");
	scanf("%d %d",&a,&b);
	c=a+b;
}
