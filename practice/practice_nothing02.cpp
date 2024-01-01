/*
practice
*/

#include<stdio.h>
int main(){
	int i,j,a,k,l;
	
//	for(i=1;i<=5;i++){
//		for(j=5;j>=i;j--){
//			printf(" * ");
//		}
//		for(k=1;k<=i;k++){
//			printf(" & ");
//		}
//		for(l=i;l<=4;l++){
//			printf(" & ");
//		}
//		printf("\n");
//	}
//	
	a=1;

	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		for(k=10;k>=a;k--){
			printf(" @ ");	
		}a=a+2;
		printf("\n");
	}
	
}


