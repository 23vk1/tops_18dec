/*
21).	Accept 2 numbers from user and swap 2 numbers with using 3rd variable
		and without using 3rd variable
*/

#include<stdio.h>
int main(){
	int a,b,c;		// for first 
	int x,y;		// for second
	
	// first
	// swaping value using 3rd variable
	printf("\n Enter value of a : ");
	scanf("%d",&a);
	printf("\n Enter value of b : ");
	scanf("%d",&b);	

	printf("\nvalue of a and b before swaping is %d and %d",a,b);	
	
	c = a+b;	// asign total of a and b to c
	a = c-a;	// substract value of a from c to achive value of b and place into a 
	b = c-b;	// substract value of b from c to achive value of a and place into b
	
	printf("\nvalue of a and b after swaping is %d and %d\n",a,b);	

	
	// second
	// swaping value of a and b without using 3rd variable
	
	printf("\n Enter value of x : ");
	scanf("%d",&x);
	printf("\n Enter value of y : ");
	scanf("%d",&y);	
	
	printf("\nvalue of x and y before swaping is %d and %d",x,y);	

	x = x+y;		// asign total of x and y to x
	y = x-y;		// substract y from total to replace value of y with value of old x
	x = x-y;		// substract new y from total to replace value of old x with value of old y 

	printf("\nvalue of x and y after swaping is %d and %d\n",x,y);	
	
	
}


