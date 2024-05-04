#include<iostream>
using namespace std;
int main()
{
	int a,b,c,Max;
	cout<<"Enter the first number=";
	cin>>a;
	cout<<"Enter the second number=";
	cin>>b;
	cout<<"Enter the third number=";
	cin>>c;
	if(a>b && a>c)
	cout<<"The maximum number is a"<<endl;
	if(b>a && b>c)
	cout<<"The maximum number is b"<<endl;
	if(c>b && c>a)
	cout<<"The maximum number is c"<<endl;
	else
	cout<<"Defaut";
	return 0;
}
