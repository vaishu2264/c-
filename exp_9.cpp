#include <iostream>
using namespace std;
class parent
{
	int a;
	public :
	parent()
	{
		a = 10;
	}
	void show_a()
	{
		cout<<endl<<"inside the parent class "<< endl;
		cout<<"value of a is "<<a<<endl;
	}
};
class child1 : public parent
{
        int b;
	public :
	child1()
	{
		b = 100;
	}
	void show_b()
	{
		cout<<endl<<"inside the child class 1 "<<endl;
		cout<<"value of b is "<<b<<endl;
	}
};
class child2 : public child1
{
	int c;
	public :
	child2()
	{
		c = 1000;
	}
	void show_c()
	{
		cout<<endl<<"inside the child class 2 "<<endl;
		cout<<"value of c is "<<c<<endl;
	}
};
int main()
{
	child2 obj;
	obj.show_a();
	obj.show_b();
	obj.show_c();
	return 0;
}

