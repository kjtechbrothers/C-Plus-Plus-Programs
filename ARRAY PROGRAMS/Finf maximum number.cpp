#include<iostream>
using namespace std;
int main()
{
	int arr[10],max,i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the number=";
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0;i<10;i++)
	if(max<arr[i])
	max=arr[i];
	cout<<"Maximum number="<<max;
	return 0;
}
