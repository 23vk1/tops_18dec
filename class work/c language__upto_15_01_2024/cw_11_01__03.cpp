/*
class work
11_01__003
*/

#include<stdio.h>
int main(){
	char a[20],b[20];
	int i,j,c=0,status=0;
	
	printf("\n Enter a : ");
	gets(a);
	
	for(i=0;i<=a[i]!='\0';i++){
		c++;
	}
	c=c-1;
	for(i=0;i<=a[i]!='\0';i++){
		b[i]=a[c];
		c--;
	}
	
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=b[i]){
			status=1;
		}
	}
	(status==0)?(printf("\n palindrome")):(printf("\n not palindrome"));
	
	
	
	
}

