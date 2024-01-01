/*
practice
star patterns
printing V with stars
*/

#include<stdio.h>
int main(){
	int i,j,k,l,n,sp1,sp2,star;
	
	printf("\n Enter the number of rows : ");
	scanf("%d",&n);
	printf("\n\n");
	
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		for(k=1;k<=(n/2);k++){
			printf("*");
		}
		for(j=n;j>i;j--){
			printf("  ");
		}
		for(k=1;k<=(n/2);k++){
			printf("*");
		}
		
		printf("\n");
	}
	
	
	
	
	
	
	
}

