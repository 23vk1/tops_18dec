#include<iostream>
#include<string>
using namespace std;

class student{
	private:
		int a;
		float b;
		string c;

	public:
		student(int x, float y, string q){
			a=x;b=y;c=q;
		}
		void print(){
			cout<<"\n roll number :"<<a<<"\n percentage :"<<b<<"\n name : "<<c;
		}
};

int main(){
	int m;
	float n;
	string name;
	cout<<"\n Enter roll number :";cin>>m;
	cout<<" Enter percentage :";cin>>n;
	cout<<" Enter name :";cin>>name;
	
	student obj(m,n,name);
	obj.print();
}



