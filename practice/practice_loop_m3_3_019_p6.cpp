/*
19. Patterns: 6
*/

// 		in progress

#include<stdio.h>
int main(){
	int i,j;
	int a=1;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf(" %d ",a);
			a++;
		}
		a=a+28-(3*i);
		printf("\n");
	}
}
