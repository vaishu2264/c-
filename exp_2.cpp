#include <iostream>
using namespace std;
struct college_info
{
	char clg_name[10];
	char clg_code[55555];
	char department[3];
	int intake;
};
int main()
{
	struct college_info college;
	cout<<"enter college name: ";
	cin>>college.clg_name;
	cout<<"enter college code: ";
	cin>>college.clg_code;
	cout<<"enter department in clg: ";
	cin>>college.department;
	cout<<"enter intake strength: ";
	cin>>college.intake;
	cout<<"\ncollege information ..."<<endl;
	cout<<"\nName of college: "<<college.clg_name;
	cout<<"\nCode of college: "<<college.clg_code;
	cout<<"\nDepartment in college: "<<college.department;
	cout<<"\nIntake strength: "<<college.intake;
	return 0;
}
