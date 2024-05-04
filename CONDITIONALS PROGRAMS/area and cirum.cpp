#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	float A,C,PI,l,r;
	int choice;
	cout<<"Press 1 to find area of rectangle"<<endl;
	cout<<"Press 2 to find circumference"<<endl;
	cin>>choice;
	if(choice==1)
	{
	cout<<"Enter the length=";
	cin>>l;
	A=l*l;
	cout<<"Area=";
	cout<<A;
    }
	else if(choice==2)
	{
	cout<<"Enter the radius=";
	cin>>r;
	cout<<"Circumference=";
	C=2*PI*r;
	cout<<C;
    }
	else
	cout<<"Invalid option";
	return 0;
}
