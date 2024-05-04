#include<iostream>
using namespace std;
int main()
{
	int num[5],i,sum;
	cout<<"Enter the five numbers:"<<endl;
	for(i=0;i<=5;i++)
	{
		cin>>num[i];
		sum=sum+num[i];
	}
	cout<<"The sum of five numbers=";
	cout<<sum;
	return 0;
}
