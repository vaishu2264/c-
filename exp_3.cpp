#include <iostream>
using namespace std;
class sample
{
	public:
	int a=3;
	int b=4;
	void display()
	{
		cout<<a<<"\n"<<b<<"\n";
	}
};
int main()
{
	sample s;
	sample *p;
	p = &s;
	s.display();
	cout<<s.a<<"\n"<<s.b<<"\n";
}
