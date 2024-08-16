//25.Create a class called Length that has data members meter and centimeter.
//Overload + operator to add two objects of class Length. (For example, L3 = L1 + L2)

#include<iostream>
using namespace std;
class Length
{
	int meter, cm;
	 public:
		void getdata()
		{
		  cout<<"enter meter: ";
		  cin>>meter;
		  cout<<"enter centimeter: ";
		  cin>>cm;
		}
		void display()
		{
			cout<<"meter: "<<meter<<endl;
			cout<<"centimeter: "<<cm<<endl;
		}
		friend Length operator+(Length &l1, Length &l2);
};
Length operator+(Length &l1, Length &l2)
{
	Length l3;
	l3.meter=l1.meter+l2.meter;
	l3.cm=l1.cm+l2.cm;
	l3.meter = l3.meter+l3.cm/100;
	l3.cm=l3.cm%100;
	return l3;
}
int main()
{
	Length obj1,obj2;
	
	obj1.getdata();
	obj2.getdata();
	obj1.display();
	obj2.display();
	Length obj3 = obj1+obj2;
	obj3.display();
	return 0;
}

















