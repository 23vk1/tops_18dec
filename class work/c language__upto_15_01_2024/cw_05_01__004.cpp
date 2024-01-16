/*
class work
05_01
*/

#include<stdio.h>

int main(){
	int i, rollno[5];
	float per[5];
	
	for(i=0;i<5;i++){
		printf("\n Enter roll number : ");
		scanf("%d",&rollno[i]);
		printf(" Enter percentage : ");
		scanf("%f",&per[i]);
	}
	for(i=0;i<5;i++){
		printf("\n roll no %d : percentage %.2f ",rollno[i],per[i]);
	}
	
	
	
	
}

