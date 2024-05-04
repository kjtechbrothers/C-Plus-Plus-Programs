#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	n=1;
	sum=0;
	cout<<"The first five numbers are:"<<endl;
	while(n<=5)
	{
		cout<<n<<endl;
		sum=sum+n;
		n=n+1;
	}
	cout<<"The sum of five numbers=";
	cout<<sum;
	return 0;
}
