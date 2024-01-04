/*
class work
01_01_2024
*/

#include<stdio.h>
int main(){
	int i;
	
	for(i=1;i<=10;i++){
		if(i==5){
			goto last;
		}
		printf("\n %d",i);
	}
	last:
	printf("\n Goto statement used");
}

