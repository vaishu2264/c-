#include <iostream>
using namespace std;
class employee
{
	int emp_number;
	char emp_name[20];
	float emp_basic;
	float emp_da;
	float emp_it;
	public:
	     void get_emp_details();
	     float find_net_salary(float basic,float da, float it);
	     void show_emp_details();
};
void employee :: get_emp_details()
{
	cout<<"\nEnter employee name : ";
	cin>>emp_name;
	cout<<"Enter employee number : ";
	cin>>emp_number;
	cout<<"Enter employee basic : ";
	cin>>emp_basic;
	cout<<"Enter employee IT : ";
	cin>>emp_it;
	cout<<"Enter employee DA : ";
	cin>>emp_da;
}
float employee :: find_net_salary(float basic,float da,float it)
{
	return (basic + da) - it;
}
void employee :: show_emp_details()
{
	cout<<"\n------Employee Details --------"<<endl;
	cout<<"\nEmployee Name : "<<emp_name;
	cout<<"\nEmployee Number : "<<emp_number;
	cout<<"\nEmployee Basic Salary : "<<emp_basic;
	cout<<"\nEmployee DA : "<<emp_da;
	cout<<"\nEmployee Income tax : "<<emp_it;
	cout<<"\nEmployee Net Salary : "<<find_net_salary(emp_basic,emp_da,emp_it);
}
int main()
{
	employee emp;
	emp.get_emp_details();
	emp.show_emp_details();
	return 0;
}
