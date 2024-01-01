/*
practice
*/

//#include<stdio.h>
//int main(){
//	int i,j,k,a;
//	a=1;
//	for(i=1;i<=5;i++){
//		for(j=5;j>=i;j--){
//			printf("   ");
//		}
//		
//		for(k=1;k<=a;k++){
//			printf(" * ");	
//		}
//		
//		a=a+2;
//		printf("\n");
//	}
//}

#include<stdio.h>
int main(){
	int i,j,k,a,l,m,n,o;
	
	
	for(i=4;i>=1;i--){
		for(j=1;j<l;j++){
			printf(" * ");
		}
		for(m=1;m<=2*i-1;m++){
			printf(" $ ");
		}
		for(n=i;n>=1;n--){
			printf(" o ");
		}
		l++;
		printf("\n");
	}
	a=1;
	for(i=1;i<=5;i++){
		for(j=4;j>=i;j--){
			printf(" * ");
		}
		for(k=1;k<=a;k++){
			printf(" @ ");	
		}a=a+2;
		for(o=i;o<=5;o++){
			printf(" o ");
		}
		printf("\n");
	}
	
}

