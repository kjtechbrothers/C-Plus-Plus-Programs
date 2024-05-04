#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			void inputdata(){
				cout<<"Enter a number:";
				cin>>n;
			}
			void outputdata(){
				cout<<"The number is:";
				cout<<n;
			}
};
main()
{
	Test T;
	T.inputdata();
	T.outputdata();
}
