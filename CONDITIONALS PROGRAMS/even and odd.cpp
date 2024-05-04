#include<iostream>
using namespace std;
int main()
{
	int n,even,odd;
	cout<<"Enter a number=";
	cin>>n;
	if(n%2==0)
	cout<<"This is a positive number";
	else if(n%2==1)
	cout<<"This is an odd number";
	else
	cout<<"default";
	return 0;
}
