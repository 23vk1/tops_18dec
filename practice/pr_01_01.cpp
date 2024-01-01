/*
practice
star patterns
diamond star pattern
*/

#include<stdio.h>
int main(){
	int i,j,k,n,space,star;
	printf("\n Enter the number of rows : ");
	scanf("%d",&n);
	space=n-1;
	star=1;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=space;j++){
			printf(" ");
		}
		for(k=1;k<=star;k++){
			printf("*");
		}
		
		if(space>i){
			space--;
			star=star+2;
		}
		if(space<=i){
			space++;
			star=star-2;
		}
		printf("\n");
	}
	
	
}
	
