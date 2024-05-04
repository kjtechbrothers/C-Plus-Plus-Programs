#include<iostream>
using namespace std;
int main()
{
	int num[10],i,max;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the value=";
		cin>>num[i];
	}
	max=num[0];
	for(i=0;i<10;i++)
	if(max<num[i])
	max=num[i];
	cout<<"This number is maximum="<<num[i];
	return 0;
}
