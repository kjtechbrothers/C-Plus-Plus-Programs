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
	cout<<"\nThe five numbers in actual order=";
	for(i=0;i<5;i++)
	cout<<num[i]<<" ";
	cout<<"\nThe five numbers in reverse order=";
	for(i=4;i>=0;i--)
	cout<<num[i]<<" ";
	return 0;
	
}
