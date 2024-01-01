/* 
3. 	WAP to take 10 no. Input from user find out below values
	a. How many Even numbers are there
	b. How many odd numbers are there
	c. Sum of even numbers
	d. Sum of odd numbers
*/ 



#include<stdio.h>
int main(){
	int a,b,c,d,e,i;
	b=0;c=0;d=0;e=0,i=1;
	
	
	// using while loop
	printf("\n using while loop");	
	while(i<=10){
		printf("\n Enter number %d : ",i);
		scanf("%d",&a);
		
		if(a%2==0){
			b=b+a;
			c++;
			printf("%d,",a);
		}else{
			d=d+a;
			e++;
			printf("%d,",a);
		}
		i++;
	}
	
	printf("\n Total evan number is = %d ",c);
	printf("\n Total odd number is = %d ",e);	
	printf("\n sum of evan number is = %d ",b);
	printf("\n sum of odd number is = %d ",d);
	printf("\n\n\n");
	
	
	// using for loop
	printf("\n using for loop");
	b=0;c=0;d=0;e=0;
	for(i=1;i<=10;i++){
		printf("\n Enter value %d : ",i);
		scanf("%d",&a);
		
		if(a%2==0){
			b=b+a;
			c++;
		}else{
			d=d+a;
			e++;
		}
		
	}
	printf("\n Total evan number is = %d ",c);
	printf("\n Total odd number is = %d ",e);	
	printf("\n sum of evan number is = %d ",b);
	printf("\n sum of odd number is = %d ",d);
	
	
}

