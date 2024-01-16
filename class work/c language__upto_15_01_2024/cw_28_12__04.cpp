/*
class work
28_12
*/

#include<stdio.h>
int main(){
	int i,n,m;
	printf("\n Enter limit : ");
	scanf("%d",&n);
	
	printf("\n Enter division value : ");
	scanf("%d",&m);
	
	for (i=1;i<=n;i++){
		if(i%m==0){
			printf("\n %d",i);
		}
	}
	
	
}



