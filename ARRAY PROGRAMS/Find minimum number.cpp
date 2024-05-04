#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,min;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the value=";
		cin>>arr[i];
	}
	min=arr[0];
	for(i=0;i<10;i++)
	if(min>arr[i])
	min=arr[i];
	cout<<"Minimum number="<<min;
	return 0;
}
