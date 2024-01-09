/*
class work
08_01
*/

#include<stdio.h>
int main(){
	int a[3][3],i,j,b,c;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			(a[i][j]%2==0)?(b++):(c++);
		}
	}	
	printf("\n total even number is %d",b);
	printf("\n total odd number is %d",c);
}

