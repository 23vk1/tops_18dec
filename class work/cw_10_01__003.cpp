/*
class work
10_01
*/

#include<stdio.h>
int main(){
	char address[40],a;
	int i,count=0;
	
	printf("\n Enter name : ");
	gets(address);
	
	printf("\n Enter character :");
	scanf("%c",&a);
		
	for(i=0;address[i]!='\0';i++){
		if(address[i]==a){
			count++;
		}
	}
		printf("%d",count);
}

