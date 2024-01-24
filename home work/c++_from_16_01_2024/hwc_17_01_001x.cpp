/*
home work
17_01_24
*/

#include<iostream>
using namespace std;
class shape{
	private:
		// data / properties
		float pi;
	public:
		// functionality / methods
		float circle(int a){
			pi=3.14;
			return (pi*a*a);
		}
		float rectangle(int a, int b){
			return (a*b);
		}
		float square(int a){
			return(a*a);
		}
};

int main(){
	int a,b,r;
	shape z1;
	
	cout<<"\n Enter the side of square : ";	
	cin>>a;
	cout<<"\tArea of square is : '"<<z1.square(a)<<"'";
	
	cout<<"\n\n Enter the radious of circle : ";	
	cin>>r;
	cout<<"\tArea of circle is : '"<<z1.circle(r)<<"'";
	
	cout<<"\n\n Enter the side and length of rctangle : ";	
	cin>>a>>b;
	cout<<"\tArea of rectangle is : '"<<z1.rectangle(a,b)<<"'";
}


