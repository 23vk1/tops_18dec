/*
class work
06_01_2024
*/

#include<stdio.h>
int main(){
	int a[10],i;
	
	for(i=0;i<10;i++){
		printf(" Enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		a[i]=a[i]+5;
	}
	for(i=0;i<10;i++){
		printf("\n value after updating  %d : %d",i+1,a[i]);
	}
}



