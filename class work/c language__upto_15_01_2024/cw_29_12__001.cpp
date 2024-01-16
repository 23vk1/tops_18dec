/*
class work
29_12
*/

#include<stdio.h>
int main(){
	int i,a,b=0;
	printf("\n Enter the value : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		b=b+i;
	}
	printf("\n Average value is %d ",b/a);
	

}



