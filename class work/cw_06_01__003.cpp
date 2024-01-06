/*
class work
06_01_2024
*/

#include<stdio.h>
int main(){
	int a[10],i,j,b;
	
	for(i=0;i<10;i++){
		printf("   Enter the value %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++){
		b=0;
		for(j=2;j<a[i];j++){
			if(a[i]%j==0){
				b=1;
			}
		}if(b==0){
			printf("\n\t %d is prime number",a[i]);
		}
	}
}

