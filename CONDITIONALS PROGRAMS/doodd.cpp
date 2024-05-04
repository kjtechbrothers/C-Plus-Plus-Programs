#include<iostream>
using namespace std;
int main()
{
	int s,e,n;
	cout<<"Enter a starting number=";
	cin>>s;
	cout<<"Enter a ending number=";
	cin>>e;
	n=s;
	do
	{
		if(n%2==1)
		cout<<n<<endl;
		n=n+1;
	}
	while(n<=e);
	return 0;
}
