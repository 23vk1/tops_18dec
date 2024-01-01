// class work 27_12_while loop ... user input 

#include<stdio.h>
int main(){
	int i=1,n;
	
	printf("\n Enter value you want to print the number : ");
	scanf("%d",&n);
	while(i<=n){
		printf("\n %d",i);
		i++;
	}
	printf("\n Exit...");
}

