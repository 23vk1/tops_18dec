/*
23).	WAP to calculate swap 2 numbers with using of multiplication and division.
*/

#include<stdio.h>
int main(){
	int a,b;
	
	printf("\n Enter value of a : ");
	scanf("%d",&a);
	
	printf("\n Enter value of b : ");
	scanf("%d",&b);

	printf("\n Value of a and b before swaping is %d and %d",a,b);
	
	a = a*b;		// asign value of multiplication of and b to a 
	b = a/b;		// divide new value of a with value of b to replace value of b with old value of a 
	a = a/b;		// divide new value of a with new value of b to replace value of a with old value of b 
	
	printf("\n Value of a and b after swaping is %d and %d",a,b);
	
	
}



