//22.WAP to swap private data members of two classes using friend function
#include<iostream>
using namespace std;
class beta;
class alpha {
		int data;
	public:
		void getdata() {
			cout<<"enter data: "<<endl;
			cin>>data;
		}
		void display() {
			cout<<data;
		}
		friend void swap(alpha &, beta&);
};
class beta {
		int data;
	public:
		void getdata() {
			cout<<"enter data: "<<endl;
			cin>>data;

		}
		void display() {
			cout<<data;
		}
		friend void swap(alpha &, beta &) ;
};
void swap(alpha &a, beta &b) {
	int temp=a.data;
	a.data=b.data;
	b.data=temp;

}
int main() {
	alpha x;
	beta y;
	x.getdata();
	y.getdata();
	cout<<"value of alpha before swap is: ";
	x.display();
	cout<<endl;
	cout<<"value of bete before swap is: ";
	y.display();
	cout<<endl;
	swap(x,y);
	cout<<"value of alpha after swap is: ";
	x.display();
	cout<<endl;
	cout<<"value of bete after swap is: ";
	y.display();
	return 0;

}