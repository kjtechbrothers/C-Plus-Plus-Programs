#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
	return(a,b);
}
int main()
{
	int c,d;
	cout<<"Enter the value of c=";
	cin>>c;
	cout<<"Enter the valu of d=";
	cin>>d;
	cout<<"The values before swapping:"<<endl;
	cout<<c<<endl<<d<<endl;
	cout<<swap(c,d);
	cout<<"The values after swapping:"<<endl;
	cout<<c<<endl<<d<<endl;
	return 0;
}
