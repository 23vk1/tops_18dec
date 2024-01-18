/*
class work
18_01_24
*/

#include<iostream>
using namespace std;
class account{
	private:
		// data
		int acc_no;
		float balance;
		char acc_type,name[20];
	
	public:
		// functionality
		void get_value(){
			cout<<"\n Enter account number : "; cin>>acc_no;
			cout<<" Enter account type s(saving), c(current) : "; cin>>acc_type;
			cout<<" Enter account holder name : "; cin>>name;
			cout<<" Enter account opening balance : "; cin>>balance;
		}
		void print_value(){
			cout<<"\n account number : "<<acc_no; 
//			cout<<"\n account type s(saving), c(current) : "<<acc_type;
			cout<<"\n account holder name : "<<name;
			cout<<"\n account balance : "<<balance;
		}
		void deposite(){
			int amount;
			cout<<"\n Enter ammount you want to deposite : ";cin>>amount;
			balance = balance+amount;
		}
		void withdraw(){
			int w1;
			cout<<"\n Enter amount you want to withdraw : ";cin>>w1;
						
			if(balance>w1){
				balance=balance-w1;
			}else{
				cout<<"\n insufficient balance";
			}
		}
};

int main(){
	int a,b;
	account a1;
	again:
	cout<<"\n 1).open account \n2). deposite\n3). withdraw\n4).print data\n\t";cin>>a;
	
	switch(a){
		case 1:{a1.get_value();break;}
		case 2:{a1.deposite();break;}
		case 3:{a1.withdraw();break;}
		case 4:{a1.print_value();break;}
	}
	cout<<"\n 1). Exit \n 2). banking\n\t";cin>>b;
	if(b==2){
		goto again;
	}
}


