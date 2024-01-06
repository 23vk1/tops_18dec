/*
1. Write a program to find out the max number from given array using function
*/

#include<stdio.h>
int largestvalue();  // function declaration

int main(){
	int b;
	b=largestvalue();	// function calling
	printf("\n Largest value is %d",b);
}

// function definition
int largestvalue(){ 
	int i,j,n[10],a=0;		// n[10] = array declration
	
	// array initialization
	for(i=0;i<10;i++){
		printf("\n Enter value(%d) : ",i+1);
		scanf("%d",&n[i]);
	}
	// finding the max number
	for(j=0;j<10;j++){
		if(a<n[j]){
			a=n[j];
		}
	}
	return a;

}
