#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int num[n];
	cout<<"Enter the size of array=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the number=";
		cin>>num[i];
	}
	cout<<"The Even Numbers=";
	for(i=0;i<n;i++)
	{
		if(num[i]%2==0)
		{
			cout<<num[i]<<" ";
		}
	}
	cout<<"\nThe Odd Numbers=";
	for(i=0;i<n;i++)
	{
		if(num[i]%2==1)
		{
			cout<<num[i]<<" ";
		}
	}
	return 0;
}
