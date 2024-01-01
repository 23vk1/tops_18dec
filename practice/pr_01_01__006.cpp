/*
practice
star patterns 
 print + using star
*/

#include<stdio.h>
int main(){
	int n,i,j;
	
	printf("\n Enter the number or rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==n/2 || j==n/2){
				printf("+");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}



