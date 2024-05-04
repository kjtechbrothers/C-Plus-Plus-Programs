#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,temp,arr[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter the value=";
		cin>>arr[i];
	}
	cout<<"The original values in array are:"<<endl;
	for(i=0;i<5;i++)
	cout<<arr[i]<<" ";
	for(i=0;i<5;i++)
	for(j=0;j<4;j++)
	if(arr[j]>arr[j+i])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	cout<<"\nThe sorted array:"<<endl;
	for(i=0;i<5;i++)
	cout<<arr[i]<<" ";
	return 0;
}
