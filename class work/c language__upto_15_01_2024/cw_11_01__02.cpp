/*
class work
11_01_002
*/

#include<stdio.h>
int main(){
	char a[20],b[20];
	int i,status=0;
	
	printf("\n enter a : ");
	gets(a);
	
	printf("\n enter b : ");
	gets(b);

	for(i=0;a[i]!='\0';i++){
		if(a[i]!=b[i]){
			status=1;
		}
	}
	(status==0)?(printf("\n same")):(printf("\n not same"));
}

