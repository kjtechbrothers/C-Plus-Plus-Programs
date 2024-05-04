#include<iostream>
using namespace std;
int main()
{
	int arr[10]={10,30,40,50,90,47,88,77,99,100};
	int i,n,loc=-1;
	cout<<"Enter the value to find number=";
	cin>>n;
	for(i=0;i<10;i++)
	if(arr[i]==n)
	loc=i;
	if(loc==-1)
	cout<<"Value not found in the array";
	else
	cout<<"value found in the idex"<<loc;
	return 0;
}
