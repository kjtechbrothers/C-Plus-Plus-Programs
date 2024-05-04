#include<iostream>
using namespace std;
int main()
{
	int num[10],i,min;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the number=";
		cin>>num[i];
	}
	min=num[0];
	for(i=0;i<10;i++)
	if(min>num[i])
	min=num[i];
	cout<<"The minimum number="<<num[i];
	return 0;
	
}
