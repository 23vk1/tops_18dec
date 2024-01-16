// class work (8)

#include<stdio.h>
int main(){
	int age;  // variable
	
	printf("Enter your age : ");
	scanf("%d",&age);   // user input
	
	
	
	// conditions for eligibilty
	if(age>=18){
		printf("\nYou are eligible for vote");
	}
	
	if(age<18){
		printf("\nYou are not eligible for vote");
	}
	
	if(age==18){
		printf("\nCongratulation for your first  vote");
	}
		

}
