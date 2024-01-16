/*
class work
12_01_24
*/

#include<stdio.h>
struct student{
		char name[20];
		int rollno;
		float per;
	}s[5];

int main(){
	int i;
	
	for(i=0;i<5;i++){
		printf(" Enter name : ");
		gets(s[i].name);
		printf(" Enter percentage : ");
		scanf(" %f",&s[i].per);
		printf(" Enter roll number : ");
		scanf("%d",&s[i].rollno);
		while(getchar()!='\n');
		printf("\n");
	}
	for(i=0;i<5;i++){
		printf("\n %s",s[i].name);
		printf("\n %d",s[i].rollno);
		printf("\n %.2f",s[i].per);
		printf("\n");
	}
	

}






