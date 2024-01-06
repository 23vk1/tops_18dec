// smaller than erlier
#include<stdio.h>
int a,w;
char p;

void pattern_menu();
void pattern_choise();

void square();
void right_half_pyramid();
void left_half_pyramid();
void full_pyramid();
void inverted_right_half_pyramid();
void inverted_left_half_pyramid();
void inverted_full_pyramid();
void rhombus();
void diammond_pattern();
void hourglass_pattern();
void hollow_square_pattern();
void hollow_full_pyramid();
void hollow_inverted_full_pyramid();
void hollow_diamond_pattern();
void hollow_hourglass_pattern();
void floyds_triangle();
void pascals_triangle();

int main(){
	int q;
	again:
	printf("\n 1). Star patterns \n 2). Number patterns \n 3). Character patterns \n        ");
	scanf("%d",&w);
	pattern_menu();
	pattern_choise();
	printf("\n\n 1). pattern \n 2). Exit \n	      ");
	scanf("%d",&q);
	if(q==1){
		goto again;
	}		
}

void pattern_menu(){
	printf("\n 1).  Square \n 2).  Right half pyramid \n 3).  Left half pyramid \n 4).  Full pyramid \n 5).  Inverted right half pyramid  \n 6).  Inverted left half pyramid \n 7).  Inverted full pyramid \n 8).  Rhombus pattern \n 9).  Diamond pattern \n 10). Hourglass pattern \n 11). Hollow square pattern \n 12). Hollow full pyramid \n 13). Hollow inverted full pyramid \n 14). Hollow diamond pattern \n 15). Hollow hourglass pattern \n 16). Floyd's triangle \n 17). Pascal's triangle ");
}

void pattern_choise(){
	int n;
	printf("\n\n Enter the input : ");
	scanf("%d",&n);
	printf("\n\n");
	switch(n){
		case 1:square(); break;
		case 2:right_half_pyramid();break;
		case 3:left_half_pyramid();break;
		case 4:full_pyramid();break;
		case 5:inverted_right_half_pyramid();break;
		case 6:inverted_left_half_pyramid();break;
		case 7:inverted_full_pyramid();break;
		case 8:rhombus();break;
		case 9:diammond_pattern();break;
		case 10:hourglass_pattern();break;
		case 11:hollow_square_pattern();break;
		case 12:hollow_full_pyramid();break;
		case 13:hollow_inverted_full_pyramid();break;
		case 14:hollow_diamond_pattern();break;
		case 15:hollow_hourglass_pattern();break;
		case 16:floyds_triangle();break;
		case 17:pascals_triangle();break;
	}
}

void square(){
	int i,j;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=10;j++){
			if(w==1){printf(" *");}
			else if(w==2){printf(" %d",a);a++;}
			else if(w==3){printf(" %c",p);p++;}
		}
		printf("\n");
	}printf(" Square ");
}

void right_half_pyramid(){
	int i,j;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=i;j++){
			if(w==1){printf(" *");}
			else if(w==2){printf(" %d",a);a++;}
			else if(w==3){printf(" %c",p);p++;}
		}
		printf("\n");
	}
	printf(" Right half pyramid");
}

void left_half_pyramid(){
	int i,j,k;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=10-i;j++){
			printf("  ");
		}
		for(k=1;k<=i;k++){
			if(w==1){printf(" *");}
			else if(w==2){printf(" %d",a);a++;}
			else if(w==3){printf(" %c",p);p++;}
		}
		printf("\n");
	}printf(" Left half pyramid");
}

void full_pyramid(){
	int i,j,k;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=10-i;j++){
			printf("   ");
		}
		for(k=1;k<=(2*i)-1;k++){
			if(w==1){printf("  *");}
			else if(w==2){(a<10)?(printf("  %d",a)):(printf(" %d",a));a++;}	
			else if(w==3){printf("  %c",p);p++;}
		}printf("\n\n");
	}printf(" Full pyramid");
}

void inverted_right_half_pyramid(){
	int i,j;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=10;j>=i;j--){
			if(w==1){printf(" *");}
			else if(w==2){printf(" %d",a);a++;}
			else if(w==3){printf(" %c",p);p++;}
		}printf("\n");
	}printf(" Inverted right half pyramid");
}

void inverted_left_half_pyramid(){
	int i,j,k;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=i;j++){
			printf("  ");
		}
		for(k=10;k>=i;k--){
			if(w==1){printf(" *");}
			else if(w==2){printf(" %d",a);a++;}
			else if(w==3){printf(" %c",p);p++;}
		}
		printf("\n");
	}printf(" Inverted left half pyramid");
	
}

void inverted_full_pyramid(){
	int i,j,k,rows=10;
	for(i=1;i<=rows;i++){a=1;p='A';
		for(j=1;j<=i;j++){
			printf("   ");
		}
		for(k=0;k<2*(rows-i)-1;k++){
			if(w==1){printf("  *");}
			else if(w==2){(a<10)?(printf("  %d",a)):(printf(" %d",a));a++;}	
			else if(w==3){printf("  %c",p);p++;}
		}printf("\n\n");
	}printf(" Inverted full pyramid");
}

void rhombus(){
	int i,j,k;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=1;k<=10;k++){
			if(w==1){printf(" *");}
			else if(w==2){printf(" %d",a);a++;}
			else if(w==3){printf(" %c",p);p++;}
		}printf("\n");
	}printf(" Rhombus pattern");
}

void diammond_pattern(){
	int i,j,k,space=5,star=1;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=space;j++){
			printf("  ");
		}
		for(k=1;k<=star;k++){
			if(w==1){printf(" *");}
			else if(w==2){printf(" %d",a);a++;}
			else if(w==3){printf(" %c",p);p++;}
		}printf("\n");
		if(i<5){
			space--;
			star=star+2;
		}else{
			space++;
			star=star-2;
		}
	}printf(" Diamond pattern");
}

void hourglass_pattern(){
	int i,j,k,space=1,star=11;
	for(i=1;i<=11;i++){a=1;p='A';
		for(j=1;j<=space;j++){
			printf("   ");
		}
		for(k=1;k<=star;k++){
			if(w==1){printf("  *");}
			else if(w==2){(a<10)?(printf("  %d",a)):(printf(" %d",a));a++;}	
			else if(w==3){printf("  %c",p);p++;}
		}printf("\n\n");
		if(i<=5){
			space++;
			star=star-2;
		}else{
			space--;
			star=star+2;
		}
	}printf(" Hourglass pattern");
}

void hollow_square_pattern(){
	int i,j;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=10;j++){
			if(j==1 || i==1 || j==10 || i==10){
				if(w==1){printf(" *");}
				else if(w==2){printf(" %d",a);a++;}
				else if(w==3){printf(" %c",p);p++;}
			}else{
				printf("  ");
			}
		}printf("\n");
	}printf(" Hollow square pattern");
}

void hollow_full_pyramid(){
	int i,j,k;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=10-i;j++){
			printf("   ");
		}
		for(k=1;k<=(2*i)-1;k++){
			if(k==1 || k==(2*i)-1 || i==10){
				if(w==1){printf("  *");}
				else if(w==2){(a<10)?(printf("  %d",a)):(printf(" %d",a));a++;}	
				else if(w==3){printf("  %c",p);p++;}	
			}else{
				printf("   ");
			}	
		}printf("\n\n");
	}printf(" Hollow full pyramid");
	
}

void hollow_inverted_full_pyramid(){
	int i,j,k,rows=10;
	for(i=1;i<=10;i++){a=1;p='A';
		for(j=1;j<=i;j++){
			printf("   ");
		}
		for(k=1;k<=2*(rows-i)-1;k++){
			if(i==1 || k==1 || k==2*(rows-i)-1){
				if(w==1){printf("  *");}
				else if(w==2){(a<10)?(printf("  %d",a)):(printf(" %d",a));a++;}	
				else if(w==3){printf("  %c",p);p++;}
			}else{
				printf("   ");
			}
		}printf("\n\n");
	}printf(" Hollow inverted full pyramid");
}

void hollow_diamond_pattern(){
	int i,j,k,space=5,star=1;
	for(i=1;i<=11;i++){a=1;p='A';
		for(j=1;j<=space;j++){
			printf("  ");
		}
		for(k=1;k<=star;k++){
			if(k==1 || k==star){
				if(w==1){printf(" *");}
				else if(w==2){printf(" %d",a);a++;}
				else if(w==3){printf(" %c",p);p++;}
			}else{
				printf("  ");
			}
		}
		if(i<=5){
			space--;
			star=star+2;
		}else{
			space++;
			star=star-2;
		}
		printf("\n");
	}printf(" hollow diamond pattern");
}

void hollow_hourglass_pattern(){
	int i,j,k,space=1,star=11;
	for(i=1;i<=11;i++){a=1;p='A';
		for(j=1;j<=space;j++){
			printf("   ");
		}
		for(k=1;k<=star;k++){
			if(k==1 || i==1 || i==11 || k==star){
				if(w==1){printf("  *");}
				else if(w==2){(a<10)?(printf("  %d",a)):(printf(" %d",a));a++;}	
				else if(w==3){printf("  %c",p);p++;}
			}else{
				printf("   ");
			}
		}printf("\n\n");
		if(i<=5){
			space++;
			star=star-2;
		}else{
			space--;
			star=star+2;
		}
	}printf(" Hollow hourglass pattern");
}

void floyds_triangle(){
	int i,j,a=1;
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			if(a<10){
				printf("  %d",a);
			}else{
				printf(" %d",a);
			}a++;
		}printf("\n");
	}printf(" Floyd's triangle");
	printf("\n Floyd's triangle can only be printed in number patterns");
}

void pascals_triangle(){
	int i,j,k,a,b,c=11, rows=5;
	for(i=1;i<=5;i++){
		b=c;
		for(j=5;j>=i;j--){
			printf("  ");
		}
		for(k=1;k<=i;k++){
			if(i==1){
				printf(" 1");
			}else{
				a=b%10;
				printf(" %d  ",a);
				b=b/10;
			}
		}
		printf("\n");
		if(i>1){
			c=c*11;	
		}
	}printf(" Pascal's triangle");
	printf("\n pascal's triangle can only be printed in number patterns");
}








