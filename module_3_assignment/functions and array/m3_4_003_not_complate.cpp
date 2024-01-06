/*
3. WAP to find reverse of string using recursion
*/

#include<stdio.h>
int reverse();


int main(){
	reverse();
}

int reverse(){
	int i,a[5];
	for(i=0;i<5;i++){
		printf("\n Enter value :");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=4;i>=0;i--){
		printf(" %d ",a[i]);
	}
}

