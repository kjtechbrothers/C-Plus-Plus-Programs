#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			Test(){
				cout<<"Enter the value of n:";
				cin>>n;
			}
			void operator++(int){
				n++;
			}
			void show(){
				cout<<"The value of n after postfix is:"<<n<<endl;
			}
};
main(){
	Test obj1;
	obj1++;
	obj1.show();
}
