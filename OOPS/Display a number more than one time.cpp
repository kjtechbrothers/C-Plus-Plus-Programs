#include<iostream>
using namespace std;
class Test{
	private:
		int n=10;
		public:
			void show(){
				cout<<"The Roll Number Is:";
				cout<<n<<endl;
			}
};
main()
{
	Test T,T1;
	T.show();
	T1.show();
}
