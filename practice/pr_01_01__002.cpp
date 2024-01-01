/*
practice
star patterns
right arrow star pattern
*/

#include<stdio.h>
int main(){
	int i,j,k,n,space,star;	
	
	printf("\n Enter the number of columns : ");
	scanf("%d",&n);
	space=0;
	star=n;
	
	for(i=1;i<=(2*n)-1;i++){
		for(j=1;j<=space;j++){
			printf(" ");
		}
		for(k=1;k<=star;k++){
			printf("*");
		}
		
		if(i<n){
			space++;
			star--;
		}
		if(i>=n){
			space--;
			star++;
			
		}
		
		printf("\n");
	}
	
}





