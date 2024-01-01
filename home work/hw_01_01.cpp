/*
home work
01_01_2024
*/

#include<stdio.h>
int main(){
	int i,a,j,k;
	
	printf("\n Enter the number : ");
	scanf("%d",&a);
	
	
	for(k=1;k<=a;k++){
		j=0;	
		for(i=2;i<k;i++){
			if(k%i==0){
				j=1;
				break;
			}
			
		}
		if(j==0){		
			printf("\n %d ",k);
		}
		
		// not quite interesting
//		if(j==1){
//			printf("\n %d not prime",k);
//		}
//		else{
//			printf("\n %d is prinme number",k);
//		}	
	}
	
	
 }

