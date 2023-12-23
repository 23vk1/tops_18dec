//19).  Calculate compound interest

/*
A	=	final amount
P	=	initial principal balance
r	=	interest rate
n	=	number of times interest applied per time period
t	=	number of time periods elapsed
*/

#include<stdio.h>
#include<math.h>
int main(){
    float A,r,t,p,n,i,j;  
    
    printf("Enter the initial principal balance : ");
    scanf("%f",&p);

    printf("Enter interest rate : ");
    scanf("%f",&r);

    printf("Enter number of times interest applied per time period : ");
    scanf("%f",&n);

    printf("Enter number of time periods elapsed : ");
    scanf("%f",&t);

//	i = 1+r/(100*n);  // for base calculation
//	printf("\n%f",i);
//	
//	j=n*t;  // for pow
//	printf("\n%f",j);
	
	
	A = p*(pow(1+r/(100*n),n*t));   // formula to find compound interest 

	printf("\nfinal amount is %f",A);
	printf("\ninterest for %f year is %f",t,A-p);

}
