/*
class work
17_01_24
*/

#include<iostream>
using namespace std;
class calculator{
	private:
		// data
		int a,b;
	public:
		void get_data(){
			cout<<"\n Entet value of a : "; cin>>a;
			cout<<"\n Entet value of b : "; cin>>b;
		}
		void sum(){cout<<"\n sum of a and b is '"<<a+b<<"'";}
		void sub(){cout<<"\n substraction of a and b is '"<<a-b<<"'";}
		void mul(){cout<<"\n multiplication of a and b is '"<<a*b<<"'";}
		void div(){cout<<"\n division of a and b is '"<<a/b<<"'";}
};

int main(){
	calculator s1;
	
	s1.get_data();
	s1.sum();
	s1.sub();
	s1.mul();
	s1.div();
}

