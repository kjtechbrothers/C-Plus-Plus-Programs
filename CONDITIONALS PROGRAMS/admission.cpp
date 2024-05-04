#include<iostream>
using namespace std;
int main()
{
	int a,b,c,avg;
	cout<<"Enter the marks of 1st subject=";
	cin>>a;
	cout<<"Enter the number of 2nd subject=";
	cin>>b;
	cout<<"Enter the number of 3rd subject=";
	cin>>c;
	avg=(a+b+c)/3;
	if(avg>80)
	{
	cout<<"You are above standard"<<endl;
	cout<<"Admission granted"<<endl;
    }
	else
	{
	cout<<"You are below standard"<<endl;
	cout<<"Admission not granted"<<endl;
    }
	return 0;
	
}
