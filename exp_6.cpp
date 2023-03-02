#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char ch,t[100],p[100];
	cout<<"\n enter character in lower case : ";
	ch = getchar();
	cout<<"The entered character is : ";
	putchar(ch);
	cout<<"\nCharacter in UPPERCASE is : ";
	putchar(ch-32);
	cout<<"\n\n";
	cout<<"\nenter a name : ";
    cin>>t;
    cout<<"\nenter the wishes : ";
    cin>>p;
	cout<<"wishes : \n";
	puts(p);
	puts(t);
	return 0;
}


