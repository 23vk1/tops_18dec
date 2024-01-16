/*
class work
10_01
*/

#include<stdio.h>
int main(){
	char name[10]={'v','k'},email[20],address[50];
	int i;
	
	printf("\n Enter address : ");
	gets(address);
	
	printf("\n Enter email : ");
	scanf("%s",email);
	
	/*
	// this code is working
	printf("\n Enter address : ");
    getchar();
	fgets(address,sizeof(address),stdin);
	*/
	
	printf("\n %s",name);
	printf("\n %s \n",email);
	puts(address);

}


