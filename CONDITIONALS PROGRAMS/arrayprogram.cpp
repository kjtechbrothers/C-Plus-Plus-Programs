#include<iostream>
using namespace std;
int main()
{
	int num[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the number=";
		cin>>num[i];
	}
	cout<<"The numbers in actual order="<<endl;
	for(i=0;i<5;i++)
	cout<<num[i]<<endl;
	cout<<"The numbers in reverse order="<<endl;
	for(i=4;i>=0;i--)
	cout<<num[i]<<endl;
	return 0;
}
