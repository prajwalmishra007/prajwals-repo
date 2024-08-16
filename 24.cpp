//24.WAP to overload unary minus (-) operator to invert sign of data members of a distance object.
#include<iostream>
using namespace std;
class Sample {
	private:
		int a;
	public:
		void getdata() {
			cout<<"enter the value of a: ";
			    cin>>a;
		}
		friend void operator -(Sample &s);
void display()
{
	cout<<"a: "<<a;
}
void display2()
{
	cout<<"the value of -a = "<<a;
}
};
void operator -(Sample &s) {
	s.a=-s.a;}
    
int main()
{
	Sample obj;
	obj.getdata();
	obj.display();
	-obj;
	cout<<endl;
	obj.display2();
	
	return 0;
	
}
