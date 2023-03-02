#include <iostream>
using namespace std;
class student_details
{
	char name[20];
	int roll_no;
	char grade[2];
	public:
	void display(int count)
	{
		cout<<"enter student information"<<endl;
		cout<<"name of the student: ";
		cin>>name;
		cout<<"Roll No: ";
		cin>>roll_no;
		cout<<"Grade(O,A+,A,B+,B,C,D,F): ";
		cin>>grade;
		cout<<"student information with Roll No "<<roll_no<<" is saved\n"<<endl;
	}
	void result(int count)
	{
		cout<<"Student "<<count<<" information"<<endl;
		cout<<"Student name: "<<name<<endl;
		cout<<"Roll No: "<<roll_no<<endl;
		cout<<"Grade Secured: "<<grade<<endl;
		cout<<"\n";
	}
};
int main()
{
	student_details s[3];
	for(int i=0;i<3;i++)
		s[i].display(i+1);
	for(int i=0;i<3;i++)
		s[i].result(i+1);
}

