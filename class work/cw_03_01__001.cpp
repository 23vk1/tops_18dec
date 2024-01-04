/*
class work
03_01
*/
#include<stdio.h>
float areaofcircle();
int main(){
	float ans;
	ans=areaofcircle();
	printf("\n Area is %f",ans);
	if(ans>=50){
		printf("\n Area is larger than 50");
	}else{
		printf("\n Area is smaller than 50");
	}
}
float areaofcircle(){
	float a,r;	
	printf("\n enter the value of radious : ");
	scanf("%f",&r);
	a= 3.14*r*r;
	return a;
} 



