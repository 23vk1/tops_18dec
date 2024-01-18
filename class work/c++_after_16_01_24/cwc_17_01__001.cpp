#include<iostream>
using namespace std;

class student{
	private:
		// variable declration
		int rollno;
		float per;
		char email[20];
		
	public:
		// function declaration
		void get_data(){
			cout<<"\n enter roll no : "; cin>>rollno;
			cout<<" enter percentage : "; cin>>per;
			cout<<" enter email : "; cin>>email;
		}
		
		void print_data(){
			cout<<"\n roll no:"<<rollno<<"\n email:"<<email<<"\n per:"<<per;
		}
};

int main(){
	int i;
	student s[5];	
	
	for(i=1;i<=5;i++){
		s[i].get_data();
	}
	
	for(i=1;i<=5;i++){
		s[i].print_data();
	}
	
}
