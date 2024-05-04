#include<iostream>
using namespace std;
int main()
{
	int n,l,t;
	cout<<"Enter the number=";
	cin>>t;
	cout<<"Enter the length of the table=";
	cin>>l;
	do{
		cout<<t<<"*"<<n<<"="<<t*n<<endl;
		n=n+1;
	}
	while(n<=l);
}
