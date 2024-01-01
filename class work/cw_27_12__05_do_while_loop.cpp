// class work 27_12
// do while  loop 

#include<stdio.h>
int main(){
	int i;
	i=11;
	
	while(i<=10){
		printf("\n %d",i);
		i++;
	}
	printf("\n while loop executed");
	printf("\n");
	// the while loop will not be exicute because, it will check condition first than go for loop 
	
	do {
		printf("\n %d",i);
		i++;
	}while(i<=10);
	// do while loop will exicutes atleast one time because, it will run loop first than check the condition
	printf("\n do while loop executed");
}

