/*
class work
08_01
*/

#include<stdio.h>
int main(){
	int a[2][2]={{23,34},{45,56}},b[2][3],c[3][3];
	int i,j;
	b[0][0]=12;
	b[0][1]=13;
	b[0][2]=14;
	
	b[1][0]=15;
	b[1][1]=16;
	b[1][2]=17;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Enter value of c[%d][%d] : ",i,j);
			scanf("%d",&c[i][j]);
		}
	}
	
//	printf("\n Element of a : %d",a[0][0]);
//	printf("\n Element of a : %d",a[0][1]);
//	printf("\n Element of a : %d",a[1][0]);
//	printf("\n Element of a : %d",a[1][1]);
//	printf("\n");
//	printf("\n Element of b : %d",b[0][0]);
//	printf("\n Element of b : %d",b[0][1]);
//	printf("\n Element of b : %d",b[0][2]);
//	printf("\n Element of b : %d",b[1][0]);
//	printf("\n Element of b : %d",b[1][1]);
//	printf("\n Element of b : %d",b[1][2]);
//	printf("\n");
//	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Value of a[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\n Value of b[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Value of c[%d][%d] : %d",i,j,c[i][j]);
		}
	}
	
}


