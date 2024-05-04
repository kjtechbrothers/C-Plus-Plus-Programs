#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			Test(){
				cout<<"The constructor is called...."<<endl;
				n=10;
			}
			void display(){
				cout<<"n:"<<n<<endl;
			}
};
main()
{
	Test T;
	T.display();
}
