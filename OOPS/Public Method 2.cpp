#include<iostream>
using namespace std;
class Test{
	public:
		int n;
};
main()
{
	Test T;
	cout<<"Enter the number:";
	cin>>T.n;
	cout<<"The number is:";
	cout<<T.n;
}
