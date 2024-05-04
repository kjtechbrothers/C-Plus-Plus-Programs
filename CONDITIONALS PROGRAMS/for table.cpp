#include<iostream>
using namespace std;
int main()
{
	int n,i,l;
	cout<<"Enter the number for table=";
	cin>>n;
	cout<<"Enter the length of the table=";
	cin>>l;
	for(i=1;i<=l;i++)
	cout<<n<<"*"<<i<<"="<<n*i<<endl;
	return 0;
}
