/*15.Create a class called Distance with two data members inch and feet.
Provide Constructor and different member function with the following operations.
? To input data for Distance objects.
? To show the data of Distance objects.
? Member function to add two Distance objects passed as object as
function arguments and then display the result*/
#include<iostream>
using namespace std;
class Distance{
	int inch, feet;
	public:
		Distance(int f=0, int i=0)
		{
		    inch = i;
		    feet=f;
		}
		void adddata( Distance &obj1,  Distance & obj2)
		{
			feet= obj1.feet+obj2.feet;
			inch = obj1.inch+obj2.inch;
			feet = feet+inch/12;
			inch = inch %12;
		}
		void display()  
		{
			cout<<"feet: "<<feet<<" inch: "<<inch;
		}
		
		
};
int main()
{
	Distance obj1(10,20);
	Distance obj2(10,20);
	Distance obj3;
	obj3.adddata(obj1,obj2);
	obj3.display();
	return 0;
	
	
}














