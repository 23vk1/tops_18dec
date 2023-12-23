/*
33).	C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
*/

#include<stdio.h>
#include<math.h>  // to use mathematical functions
int main(){
	int  a,p1,p2,p3;
	printf("\n Enter any number : ");
	scanf("%d",&a);
	
	p1 = pow(a,1); // a to the power 1
	printf("\n\n%d^1 = %d",a,p1);
	
	p2 = pow(a,2);	// a to the power 2
	printf("\n%d^2 = %d",a,p2);	
	
	p3 = pow(a,3);	// a to the power 3
	printf("\n%d^3 = %d",a,p3);
}



