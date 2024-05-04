#include<iostream>
using namespace std;
int main()
{
	int a[5],sum,i;
	cout<<"Enter the five values:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"The sum of five numbers=";
	cout<<sum;
	return 0;
}
