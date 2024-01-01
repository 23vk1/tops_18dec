#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
  int p=1;
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf("   ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf(" %d ",p);
		   p++;  
       }  
       m++;  
     
      printf("\n");  
    }  
    return 0;  
}
