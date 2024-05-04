#include<iostream>
using namespace std;
int main()
{
	int s,e,c;
	cout<<"Enter a starting number=";
	cin>>s;
	cout<<"Enter a ending number=";
	cin>>e;
	c=s;
	do
	{
	if(c%2==0)
	cout<<c<<endl;
	c=c+1;		
	}
	while(c<=e);
	return 0;
	
}
