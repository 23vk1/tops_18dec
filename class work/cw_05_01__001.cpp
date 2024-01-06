/*
calss work
05_01
*/

#include<stdio.h>
int main(){
	int a[10],i,b=0,c=0;
	
	for(i=0;i<10;i++){
		printf("\n Enter value (%d) : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		(a[i]%2==0)?(printf("\n Enter value (%d) : %d even number",i+1,a[i])):(printf("\n Enter value (%d) : %d odd number",i+1,a[i]));
		(a[i]%2==0)?(b++):(c++);
	}printf("\n total even number is %d and odd number is %d",b,c);
}

