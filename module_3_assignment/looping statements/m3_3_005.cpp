/*
5. WAP to print factorial of given number
*/

#include<stdio.h>
int main(){
	int i=1,n,a,opt;
	
	printf("\n Select option from below \n 1). factorial using while loop \n 2). factorial using for loop\n");
	scanf("%d",&opt);
	
	// we can use this 2 lines in else if condition for batter result
	printf("\n Enter the number you want to find factorial : ");
	scanf("%d",&n);
	
	if(opt==1){
		
		// using while loop
		a=1;
		while(i<=n){
			a=a*i;
			i++;
		}
		printf("\n factorial of %d = %d",n,a);	
	}else if (opt==2){
		
		// using for loop
		a=1;
		for(i=n;i>=1;i--){
			a=a*i;
		}
		printf("\n factorial of %d = %d",n,a);
	}else{
		printf("\n wrong choise");
	}
	
	
	
	
}

