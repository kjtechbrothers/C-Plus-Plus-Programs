#include<iostream>
using namespace std;
class Test{
	private:
		const int n=150;
		const int x=n-100;
		public:
			Test(){
				cout<<"The value of n is:"<<n<<endl;
				cout<<"The value of x is:"<<x<<endl;
			}
};
main()
{
	Test T;
}
