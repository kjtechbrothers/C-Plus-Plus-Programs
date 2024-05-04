#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,sum=0;
	float avg;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value=";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	avg=sum/5;
	cout<<"Sum of these five digits="<<sum<<endl;
	cout<<"Average of these five digits="<<avg<<endl;
	return 0;
	
}
