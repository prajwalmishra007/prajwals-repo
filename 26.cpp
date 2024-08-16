//26.Write a conversion routine in c++ that can convert user-defined data distance to basic data float. 
//Assume that the class distance contains two data members (feet (integer type) and inch (floating point type). 
//NOTE 1-meter = 3.33 feet and 1 feet = 12 inches)
#include<iostream>
using namespace std;
class Distance{
	int feet;
	float inch;
	public:
		void getdata()
		{
			cout<<"enter feet: ";
			cin>>feet;
			cout<<"enter inch: ";
			cin>>inch;
		}
		operator float()
		{
			float ft = feet+ inch/12;
			
			return(ft/3.33);
		}
};
int main()
{
	Distance d;
	d.getdata();
	float meter = d;
	cout<<"meter: "<<meter;
	return 0;
}



