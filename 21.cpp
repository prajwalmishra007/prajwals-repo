//21.WAP to add, private data members of two classes using friend function
#include<iostream>
using namespace std;
class B;
class A {
		int data;
	public:
		void getdata() {
			cout<<"enter the value of a: "<<endl;
			cin>> data;
		}
		friend int sum(A,B);
};
class B {
		int data;
	public:
		void setdata() {
			cout<<"enter the value of b: "<<endl;
			cin>>data;
		}
		friend int sum(A,B);
};
int sum (A x, B y) {
	return x.data+y.data;
}
int main() {
	A xx;
	B yy;
	xx.getdata();
	yy.setdata();
	cout<<"the sum is : "<<sum(xx,yy);
	return 0;
}