//17.Write a class Complex to represent complex numbers with real and imaginary parts. 
//Define a member function to add two complex numbers. Pass objects of the Complex class to this function and display the result

#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
	public :
		void getValue()
		{
		   cout<<"enter the value of the complex number:"<<endl;
		   cout<<"enter real part: " ;
		   cin>>real;
		   cout<<"enter imaginary part: ";
		   cin>>img;
		}
		void add(Complex c1, Complex c2)
		{
			real = c1.real+c2.real;
			img = c1.img + c2.img;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.getValue();
	c2.getValue();
	c3.add(c1,c2);
	c3.display();
	return 0;
}