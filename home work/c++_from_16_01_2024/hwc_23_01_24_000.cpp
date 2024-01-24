/*
home work
23_01_24
*/

#include<iostream>
#include<string>
using namespace std;
class account{
	private:
		// data
		int acc_no;
		float balance;
		char acc_type;
		string name;
	
	public:
		// functionality
		account(int x, float y, char c, string str){
			acc_no = x;
			balance = y;
			acc_type = c;
			name = str;
		}
		
		void print_value(){
			cout<<"\n account number : "<<acc_no; 
			cout<<"\n account type s(saving), c(current) : "<<acc_type;
			cout<<"\n account holder name : "<<name;
			cout<<"\n account balance : "<<balance;
		}
		void deposite(){
			int amount;
			cout<<"\n Enter ammount you want to deposite : ";cin>>amount;
			balance = balance+amount;
			cout<<" account balance : "<<balance;
		}
		void withdraw(){
			int w1;
			cout<<"\n Enter amount you want to withdraw : ";cin>>w1;
						
			if(balance>w1){
				balance=balance-w1;
				cout<<" account balance : "<<balance;
			}else{
				cout<<" insufficient balance";
			}
			
		}
};

int main(){
	int a,b,acc_no_;
	float balance_;
	char acc_type_;
	string name_;
	
	cout<<"\n Enter account number : "; cin>>acc_no_;
	cout<<" Enter account type s(saving), c(current) : "; cin>>acc_type_;
	cout<<" Enter account holder name : "; cin>>name_;
	cout<<" Enter account opening balance : "; cin>>balance_;
	
	account a1(acc_no_,balance_,acc_type_,name_);
	again:
	cout<<"\n1). deposite\n2). withdraw\n3).print data\n\t";cin>>a;
	
	switch(a){
		case 1:{a1.deposite();break;}
		case 2:{a1.withdraw();break;}
		case 3:{a1.print_value();break;}
	}
	cout<<"\n\n 1). Exit \n 2). banking\n\t";cin>>b;
	if(b==2){
		goto again;
	}
}


