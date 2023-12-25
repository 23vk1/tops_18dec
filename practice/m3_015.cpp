/*
15).	Convert school’s name in abbreviated form
*/


#include<stdio.h>
int main(){
	char fname[20],mname[20],lname[20];
	
	printf("\n Enter full name : ");
	
	scanf("%s %s %s",&fname,&mname,&lname);
	
	printf("%c%c %s",fname[0],mname[0],lname);
	

}
