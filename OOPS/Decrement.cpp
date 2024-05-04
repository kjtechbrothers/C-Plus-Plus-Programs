#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			Test(){
				cout<<"Enter the value of n is:";
				cin>>n;
			}
			void operator --(){
				n--;
			}
			void show(){
				cout<<"The value of n after decrement is:"<<n<<endl;
			}
};
main(){
	Test obj1;
	--obj1;
	obj1.show();
}
