/*
6. WAP to print Fibonacci series up to given numbers
*/

#include<stdio.h>
int main(){
	int i,n,a,b,c,opt;
	
	printf("\n Select option from below \n 1). while loop \n 2). for loop\n");
	scanf("%d",&opt);
	
	// we can use this 2 lines in else if condition for batter result 
	printf("\n Enter the number you want to print fibonacci number : ");
	scanf("%d",&n);
	
	if(opt==1){
		a=0;b=1;
		printf("\n 1 = %d \n 2 = %d ",a,b);
		i=3;
		while(i<=n){
			c=a+b;
			a=b;
			b=c;
			printf("\n %d = %d",i,c);
			i++;
		}	
	}else if(opt==2){
		a=0;b=1;
		printf("\n 1 = %d \n 2 = %d ",a,b);
		for(i=3;i<=n;i++){
			c=a+b;
			a=b;
			b=c;
			printf("\n %d = %d",i,c);
		}
	}else{
		printf("\n wrong choise");
	}
	
	
	
	
}



