#include<iostream>
using namespace std;
class Test{
	private:
		int n=10;
		public:
			void show(){
				cout<<"The Roll Numer Is:";
				cout<<n;
			}
};
main()
{
	Test T;
	T.show();
}
