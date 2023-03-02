#include <iostream>
using namespace std;
class Employee
{
	char emp_name[20];
	int emp_num;
	float basic,da,it,gross_sal,net_sal;
	public:
	void read_emp_details(int count){
		cout<<"\nEnter Employee "<<count<<" Details";
	        cout<<"\nEmployee Number: ";
	        cin>>emp_num;
	        cout<<"Employee Name: ";
	        cin>>emp_name;
	        cout<<"Basic Salary: ";
	        cin>>basic;
	        cout<<"\n Employee "<<count<<" Details are saved\n";
	}
        float find_net_salary(){
		da = basic * 0.52;
                gross_sal = basic + da;
                it = gross_sal * 0.30;
                net_sal = (basic + da) - it;
                return net_sal;
	}
	void display_emp_details(int count){
		cout<<"\nEmployee "<<count<<" Details\n";
                cout<<"\nEmployee Number : "<<emp_num;
                cout<<"\nEmployee Name	: "<<emp_name;
                cout<<"\nNet Salary: "<<net_sal;
                cout<<"\n--------------------------\n";
	}
};
int main()
{
	 Employee emp[100];
         int number_of_emp, count;
         cout<<"\nPlease enter the number of Employees (Max-100): ";
         cin>>number_of_emp;
         for(count=0; count< number_of_emp; count++){
		 emp[count].read_emp_details(count+1);
	 }
         for(count=0; count < number_of_emp; count++){
                 emp[count].find_net_salary();
         } 
         for(count=0; count < number_of_emp; count++){
                 emp[count].display_emp_details(count+1);
         }
         return 0;
}
