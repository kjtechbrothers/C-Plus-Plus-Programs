#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number=";
	cin>>n;
	i=1;
	while(i<=10)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i=i+1;
	}
	return 0;
}
