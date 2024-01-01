/*
class work
26_12_2023
*/

#include<stdio.h>
int main(){
	
	char a;
	printf("\n Enter any character : ");
	scanf(" %c",&a);
	
	switch(a){
		case 'm':
			printf("Monday");
		break;
		case 't':
			printf("tuesday, thursday");
		break;
		case 'w':
			printf("wednesday");
		break;
		case 'f':
			printf("friday");
		break;
		case 's':
			printf("saturday, sunday");
		break;
		default:
			printf("nothing is possible");
		break;
	}


}



