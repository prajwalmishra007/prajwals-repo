//20.Write a program for illustrating default constructor, parameterized
//constructor and copy constructor.
#include<iostream>
using namespace std;
class sample {
		int x;
	public:
		sample() {
			x=120;
		}
		sample(int y) {
			x=y;
		}
		sample(sample &obj ) {
			x=obj.x;

		}
		void display() {
			cout<<"value of x is: "<<x<<endl;
		}
};
int main() {
	sample obj1,obj2(100);
	sample obj3(obj2);
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}