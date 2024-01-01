/*
4. WAP to print table up to given numbers
*/

#include<stdio.h>
int main(){
	int i=1,t,n,opt;
	printf("\n Enter the number you want table from 1 to 100 : ");
	scanf("%d",&n);
	
	printf("\n which loop you want to use to print table \n 1). while loop \n 2). for loop\n");
	scanf("%d",&opt);
	
	if(opt==1){
		// using while loop
		while(i<=n){
		t=1;
		while(t<=10){
			printf("\n  %d  %d  %d",i,t,i*t);
			t++;
		}
		printf("\n");
		i++;
		}
	}else if(opt==2){
		// using for loop
		for(i=1;i<=n;i++){
			for(t=1;t<=10;t++){
				printf("\n  %d  %d  %d",i,t,i*t);
				printf("\n");
			}
		}
	}else{
		printf("\n option not available");
	}
	
}



