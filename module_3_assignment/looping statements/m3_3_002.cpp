/*
2. WAP to accept 5 numbers from user and display all numbers
*/

#include<stdio.h>
int main(){
	int i,a,b,c,d,e,f;
	i=1;

	// using while loop
	
	while(i<=5){
		printf("\n\n Enter any number : ");
		scanf("%d",&a);
		printf(" you entered %d",a);
		i++;
	}
	
	//	using for loop
	for(i=1;i<=5;i++){
		printf("\n\n Enter any number using for  loop (%d) : ",i);
		scanf("%d",&a);
		printf(" you entered %d",a);
	}
	
	

}

