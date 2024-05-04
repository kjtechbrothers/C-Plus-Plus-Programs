#include<iostream>
using namespace std;
int main()
{
	int n,evensum=0,oddsum=0;
	cout<<"Enter a number=";
	cin>>n;
	while(n>=0)
	{
		if(n%2==0)
		evensum=evensum+n;
		else
		oddsum=oddsum+n;
		n--;
	}
	cout<<"The sum of even numbers="<<evensum<<endl;
	cout<<"The sum of odd numbers="<<oddsum<<endl;
	return 0;
}
