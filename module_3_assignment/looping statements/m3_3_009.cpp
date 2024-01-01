/*
9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
*/

#include<stdio.h>
int main(){
	int i,n,a,r,b;
	
	printf("\n Enter the value : ");
	scanf("%d",&n);
	b=n; 		// b is used to just for printing in last line 
	a=0;
	for(i=n;i!=0;i=n){
		r=n%10;
		a=a+r;
		n=n/10;
	}
	printf("\n Sum of all digit from %d is %d",b,a);
}


