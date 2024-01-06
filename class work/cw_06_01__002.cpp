/*
class work
06_01_2024
*/

#include<stdio.h>
int main(){
	int a[10],i,j,b[10];
	
	for(i=0;i<10;i++){
		printf("\n Enter the number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=9;i>=0;i--){
		printf("\t %d",a[i]);
	}
	
	// for storing all the value of array a to array b
//	for(i=0;i<10;i++){
//		for(j=9-i;j>=0;j--){
//			b[j]=a[i];
//		}
//	}
//	printf("\n");
//	for(i=9;i>=0;i--){
//		printf("\t %d",b[i]);
//	}
}


