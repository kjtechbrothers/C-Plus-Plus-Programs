#include<iostream>
using namespace std;
int main()
{
	int fact=1,n,i=1;
	cout<<"Enter a number=";
	cin>>n;
	cout<<"The factorial=";
	do
	{
		fact=fact*i;
		i++;
		
	}
	while(i<=n);
	cout<<fact;
	return 0;
	
}
