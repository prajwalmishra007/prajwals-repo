//19.Define a class BankAccount with data members for the account number and balance. Implement member functions to deposit and withdraw
//money, defined outside the class using the scope resolution operator. Create an object and perform some transactions to demonstrate these functions.

#include<iostream>
using namespace std;
class BankAccount {
		int accNum;
		float balance;
	public:
		void getData() {
			cout<<"enter account number: "<<endl;
			cin>>accNum;
			cout<<"enter balance"<<endl;
			cin>>balance;
		}
		void transaction(BankAccount & , float);
		void display() {
			cout<<"account number: "<<accNum<<endl;
			cout<<"balance: "<<balance<<endl;
		}

};
void BankAccount::transaction(BankAccount &acc, float amt) {
	balance = balance - amt;
	acc.balance = acc.balance+amt;
}
int main()
{
	BankAccount acc1, acc2;
	int money;
	acc1.getData();
	acc2.getData();
	cout<<"innitial account information:-"<<endl;
	acc1.display();
	acc2.display();
	cout<<"how much is to be transfered?"<<endl;
	cin>>money;
	acc2.transaction(acc1, money);
	acc1.display();
	acc2.display();
	return 0;
	
}
