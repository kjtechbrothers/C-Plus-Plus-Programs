#include<iostream>
using namespace std;
int main()
{
	int num[5],i,sum=0;
	float avg=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the number:";
		cin>>num[i];
		sum=sum+num[i];
	}
	avg=sum/5;
	cout<<"The sum of five numbers="<<sum<<endl;
	cout<<"The average of five numbers="<<avg<<endl;
	return 0;
	
}
