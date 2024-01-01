/*
practice 
star patterns
Rhombus Star Pattern
*/

#include<stdio.h>
int main(){
	int i,j,k,a,b,c;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		for(j=1;j<=a-i;j++){
			printf(" ");
		}
		for(k=1;k<=a;k++){
			printf("*");
		}
		printf("\n");	
	}
}

