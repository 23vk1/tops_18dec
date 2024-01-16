#include<stdio.h>
int main(){
	int i=1,n;
	
	printf("\n Enter number you want to print : ");
	scanf("%d",&n);
	
	
	while(i<=n){
		(i%2==0)? printf("\n  %d is even number",i): printf("\n  %d is odd number",i);
		i++;
	}
	printf("\n Exit.......");
}
