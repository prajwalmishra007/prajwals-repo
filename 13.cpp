/*13.Define a class Interest with following specifications:
a. Data Members
i. principal
ii. time
iii. rate

b. Member Functions
i. getdata() to assign initial values
ii. display () to display values
iii. Findinterest() 
to find and display the interest*/

#include<iostream>
using namespace std;
class interest
{
	float principal, time, rate,interest;
	public:
		void getdata()
		{
			cout<<"enter the principle amount: ";
			cin >>principal;
			cout<<"enter time and interest rate: ";
			cin>>time>>rate;			
		}
		void display()
		{
			cout<<"the interest is: "<<interest;
		}
		void findinterest()
		{
			interest = (principal*time*rate)/100;
		}
	
	
};
int main()
{
	interest obj;
	obj.getdata();
	obj.findinterest();
	obj.display();
	return 0;
}




