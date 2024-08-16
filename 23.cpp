//23.WAP to overload == operator using friend function.
#include<iostream>
using namespace std;
class Sample {
		int feet,inch;
		public:
		void getdata() {
			cout<<"enter feet: ";
			cin>>feet;
			cout<<"enter inch: ";
			cin>>inch;
		}
		friend int operator==(Sample &s1, Sample&s2);
};
int operator ==(Sample &s1, Sample &s2) {
	if(s1.feet==s2.feet&&s1.inch==s2.inch) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
	Sample d1,d2;
	d1.getdata();
	d2.getdata();
	if(d1==d2)
		cout<<"both distances are of same length";
	else
		cout<<"both distances are of different length";
	return 0;

}









