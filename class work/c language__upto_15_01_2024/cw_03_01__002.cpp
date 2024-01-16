/*
class work
03_01
*/

#include<stdio.h>
char getChar();

int main(){
	char a;
	
	a=getChar();
	if(a=='a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u'){
		printf("\n It is vowel");
	}else{
		printf("\n it is not vowel");
	}
	
}

char geNtChar(){
	char c;
	printf("\n Enter character to check :");
	scanf("%c",&c);
	return c;
}


