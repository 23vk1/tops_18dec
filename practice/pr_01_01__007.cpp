/*
practice
star patterns
print X with star 
*/

#include<stdio.h>
int main(){
	int i,j,n;
	printf("\n Enter the number of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j || j==n-i+1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");	
	}
}

