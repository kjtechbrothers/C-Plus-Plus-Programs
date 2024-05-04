#include<iostream>
using namespace std;
class Test
{
	private:
		int n=10;
		public:
			void show()
			{
				cout<<"The value of n:"<<n;
			}
};
main()
{
	Test T;
	T.show();
}
