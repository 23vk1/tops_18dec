/*
 class work
 if..else if.. else statement
*/

#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("\n Enter value of a : ");
	scanf("%d",&a);

	printf("\n Enter value of b : ");
	scanf("%d",&b);	

	printf("\n Enter value of c : ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("\n %d is  biggest",a);
		}else{
			printf("\n %d is  biggest",c);
		}
	}else if(b>c){
		printf("\n %d is  biggest",b);
	}else{
		printf("\n %d is  biggest",c);
	}	
}


