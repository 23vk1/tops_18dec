/*
practice
*/


#include<stdio.h>
float calculator();
int Repeat();

int main(){
	int r;
	float ans;
	recalculation:
	ans = calculator();
	printf("\n ans is %.2f", ans);
	r=Repeat();
	if(r==1){
		goto recalculation;
	}
	
}

float calculator(){
	float a,c,d;
	char b;
	printf("\n Enter first input : ");
	scanf("%f",&a);
		
	printf(" Enter second input : ");
	scanf("%f",&c);
		
	printf("\n Enter + for sum \n Enter - for substraction \n Enter * for multiplication \n Enter / for division \n        ");
	scanf(" %c",&b);
		
	if(b=='+'){
		d=a+c;
	}else if(b=='-'){
		d=a-c;
	}else if(b=='*'){
		d=a*c;
	}else if(b=='/'){
		d=a/c;
	}
	return d;
}

int Repeat(){
	int x;
	printf("\n\n\n 0 exit \n 1 calculate again\n            ");
	scanf("%d",&x);
	return x;
}


