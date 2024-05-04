#include<iostream>
using namespace std;
int main()
{
	int num[2],i,pro;
	for(i=0;i<2;i++)
	{
		cout<<"Enter a number=";
		cin>>num[i];
		pro=pro*num[i];
	}
	cout<<"Product of these two numbers="<<pro;
	return 0;
}
