/*14.Define a class Room with following specifications:
a. Data Members
i. length
ii. width
b. Member Functions
i. getdata() to assign initial values
ii. display () to display length and width
iii. area () 
to find and display the area*/

#include<iostream>
using namespace std;
class room
{
   int length, width,areaa;
   public:
   	void getdata()
   	{
   		cout<<"enter the length and width of the room: ";
   		cin>>length>>width;
   }
   void display()
   {
   	cout<<"the length of the room is: "<<length<<endl;
   	cout<<"the width of the room is: "<<width<<endl;
   }
   void area()
   {
   	areaa= length * width;
   	cout<<"the area is: "<<areaa;
   }	
};
int main()
{
	room obj;
	obj.getdata();
	obj.display();
	obj.area();
	return 0;
	
};