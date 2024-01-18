/*
class work
18_01_24
*/

#include<iostream>
using namespace std;
class factorial{
	private:
		// data
		int i;
	public:
		// functionality
		int fact(int n){
			for(i=n;i>1;i--){
				n=n*(i-1);
			}
			return n;
		}	
};
int main(){
	factorial f1;
	int a;
	cout<<"\n Enter number : "; cin>>a;
	cout<<f1.fact(a);
}

