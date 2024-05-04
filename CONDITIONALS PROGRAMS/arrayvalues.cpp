#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	cout<<"Enter the five numbers:"<<endl;
	for(i=0;i<=5;i++)
	{
		cin>>a[i];
	}
	cout<<"The values in array:"<<endl;
	for(i=0;i<=5;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
