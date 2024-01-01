/*
6. WAP to print Fibonacci series up to given numbers
*/

#include<stdio.h>
int main(){
	int i=1,a,b,n;
	printf("\n Enter the number of fibonacci you want : ");
	scanf("%d",&n);
	a=0;
	b=1;
	if(n%2==0){
		n=n/2;
		while(i<=n){
			printf("\n %d",a);
			printf("\n %d",b);
			a=a+b;
			b=a+b;
			i++;
		}
	}else{
		n=(n-1)/2;
		while(i<=n){
			printf("\n %d",a);
			printf("\n %d",b);
			a=a+b;
			b=a+b;
			i++;
		}
		printf("\n %d",a);
	}
	
}






