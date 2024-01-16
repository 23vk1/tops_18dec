/*
class work
10_01
*/

#include<stdio.h>
int main(){
	char name[20];
	int i,count=0;
	
	printf("\n Enter name : ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++){
		count++;
	}
	printf("\n %d ",count);
}



