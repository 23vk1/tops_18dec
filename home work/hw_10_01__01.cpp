/*
home work
10_01
*/

#include<stdio.h>
int main(){
	char a[100],b[10];
	int i,j,k,n=0,count=0,status=0;
	
	printf("\n Enter the  sentance : \n		");
	gets(a);
	
	printf("\n Enter word : ");
	gets(b);
	
	for(i=0;b[i]!='\0';i++){
		count++;
	}
	
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[0]){k=0;
			for(j=i;j<=i+count;j++){
				if(a[j]!=b[k]  || a[j]=='\0'){
					if(b[k]!='\0'){
						break;
					}else{
						status=1;
					}
				}k++;
			}
			if(status==1){
				n=n+1;
				status=0;
			}	
		}
	}
	printf("\n '%s' used %d times in this sentance",b,n);
}


