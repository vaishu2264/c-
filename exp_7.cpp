#include <iostream>
using namespace std;
int my_variable = 10;
int main()
{
	int my_variable = 100;
	cout<<"value of global variable : "<<::my_variable;
	cout<<"\nvalue of local variable : "<<my_variable;
	return 0;
}
