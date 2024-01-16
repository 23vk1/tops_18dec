/*
class work
03_01
*/

#include<stdio.h>
int sumoftwo(int a, int b);

int main(){
	int c;
	c=sumoftwo(30,30);
	printf("\n sum is %d ",c);
}

int sumoftwo(int a, int b){
	int c;
	c=a+b;
	return c;
}

