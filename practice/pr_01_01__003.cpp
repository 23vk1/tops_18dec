/*
practice
star patterns
left arrow star pattern
*/

#include<stdio.h>
int main(){
	int i,j,k,n,space,star;
	
	printf("\n Enter the number of columns : ");
	scanf("%d",&n);
	space=n-1;
	star=1;
	
	for(i=1;i<=(2*n)-1;i++){
		for(j=1;j<=space;j++){
			printf("*");
		}
//		for(k=1;k<=star;k++){
//			printf(" ");
//		}
		if(i<n){
			star++;
			space--;
		}
		if(i>n){
			star--;
			space++;
		}
		
		printf("\n");
		
	}
	
	
	
}



