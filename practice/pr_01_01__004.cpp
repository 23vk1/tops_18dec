/*
practice
star patterns
printing K with star
*/

#include<stdio.h>
int main(){
	int i,j,l,k,n,space,star;
	
	printf("\n Enter the column number : ");
	scanf("%d",&n);
	printf("\n\n");
	star=n;
	space=n;
	
	for(i=1;i<=(2*n)-1;i++){
		for(j=1;j<(n-(0.2*n));j++){
			printf("*");
		}
		for(k=1;k<=space;k++){
			printf(" ");
		}
		for(l=1;l<=star;l++){
			printf("*");
		}
		if(i<n){
			star--;
			space--;
		}
		if(i>=n){
			star++;
			space++;
		}
		printf("\n");	
	}
}

