/*
practice - loop
reverse the number
*/

#include<stdio.h>
int main (){
	int a,b,n;
	
	printf("\n Enter the number : ");
	scanf("%d",&n);
	b=0;
//	while(n!=0){
//		a=n%10;
//		b=b*10+a;
//		n=n/10;
//	}
//	printf("\n %d ",b);
//	
	for( ;n!=0; ){
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	printf("\n %d ",b);
	
	
	
}




