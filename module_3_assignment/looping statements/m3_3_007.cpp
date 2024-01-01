/*
7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746
*/

#include<stdio.h>
int main(){
	int n,a,b,i;  // n for accepting number, a as reminder, b is storing numbers in reverse, i is for looping
	
	printf("\n Enter number : ");
	scanf("%d",&n);
	b=0;
	for(i=n;i!=0;i=n){
		a=n%10;  		// it  will give last digit of number 
		b=b*10+a;		// it will store the last digit in order of reverse
		n=n/10;			// it will decrease the last digit  from number
	}
	printf("\n %d",b);
}



