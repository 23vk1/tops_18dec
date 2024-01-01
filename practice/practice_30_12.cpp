/*
practice 
Q.19___06
*/


#include<stdio.h>
int main(){
	int i,j,k,a,b,c;
	a=1;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			if(i==1){
				printf("  %d ",a);
				a++;
				if(j==10){
					printf(" \n ");
				}
			}else if(i>=2 && i<10){
				while(j==1){
					a=a+(20-2*i)+(10-j);
					printf(" %d ",a);
					a++;
					j++;
				}
				while(j==2 && i>=3 && i<=9){
					a=a+28;
					printf(" %d ",a);
					a++;
					j++;
				}
				while(j==9 && i>=3 && i<=9){
					a=a-26;
					printf(" %d ",a);
					a++;
					j++;
				}
				while(j==3 && i>=4 && i<=8){
					a=a+20;
					printf(" %d ",a);
				k'l'	a++;
					j++;
				}
				while(j==8 && i>=4 && i<=8){
					a=a-18;
					printf(" %d ",a);
					a++;
					j++;
				}
				
//				if(j==1){
//					a=a+(20-2*i)+(10-j);
//					printf(" %d ",a);
//					a++;	
//				}else 
				if(j>=2 && j<10){
					printf(" %d ",a);a++;
				}
				else{
					a=a-34;
					printf(" %d ",a);
					a++;
					printf("\n");
				}
			}
//			else if(i>=3 && i<9){
//				if(j==2){
//					a=a+(20-3*i)+(11-2*j);
//					printf(" %d ",a);
//					a++;	
//				}else if(j>=2 && j<10){
//					printf(" %d ",a);a++;
//				}
//				else{
//					a=a-25;
//					printf(" %d ",a);
//					a++;
//					printf("\n");
//				}
//			}
			
			
			
			
			
			else if(i==10){
				if(j==1){
					a=a+9;
				}
					printf(" %d ",a);
					a--;
				}
			
			
			
			
		}
		
	}
	
}








