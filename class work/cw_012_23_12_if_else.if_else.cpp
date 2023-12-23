/*
class work 23_12_2023
if....else if..... else statement
*/

#include<stdio.h>
int main (){
	
	int a,b,c;
	
	printf("\n Enter value a : ");
	scanf("%d",&a);
	
	printf("\n Enter value b : ");
	scanf("%d",&b);
	
	printf("\n\n 1). summation \n 2). substraction \n 3). multiplication \n 4). division \n 5). modulo");
	printf("\n\n input option : ");
	scanf("%d",&c);
	
	if(c==1){
		printf("\n\n Sum of %d and %d is %d",a,b,a+b);
	}else if(c==2){
		printf("\n\n Substraction of %d and %d is %d",a,b,a-b);
	}else if(c==3){
		printf("\n\n Multiplication of %d and %d is %d",a,b,a*b);
	}else if(c==4){
		printf("\n\n Division of %d and %d is %d",a,b,a/b);
	}else if(c==5){
		printf("\n\n Mod of %d and %d is %d",a,b,a%b);
	}else {
		printf("\n\n input is incorrect");
	}
	 
	
	
}




