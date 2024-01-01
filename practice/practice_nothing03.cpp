/*
practice 

*/

//#include<stdio.h>
//int main(){
//	int i,j,k,l;
//	int a=1;
//	
//	for(i=1;i<=10;i++){
//		for(k=1;k<=9;k++){
//			if(i!=1){
//				printf("   ");
//			}
//		}
//		for(j=i;j<=10;j++){
//			if(i==1 || j==10){
//			printf(" %d ",a);
//			a++;	
//			}
//	
//		}
//		printf("\n");
//	}
//
//}

#include<stdio.h>
int main(){
	int i,j,k,l;
	int a=1;
	
	for(i=1;i<=10;i++){
		for(k=1;k<=9;k++){
			if(i!=1){
				printf("   ");
			}
		}
		for(j=i;j<=10;j++){
			if(i==1 || j==10){
			printf(" %d ",a);
			a++;	
			}
	
		}
		printf("\n");
	}

}
