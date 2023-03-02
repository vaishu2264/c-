#include <iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr = new int;
	cout<<"number of bytes allocated = "<<sizeof(ptr)<<endl;
	*ptr = 100;
	cout<<"value =  "<<*ptr<<endl;
	return 0;
}
