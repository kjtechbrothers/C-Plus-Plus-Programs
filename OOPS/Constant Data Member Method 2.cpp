#include<iostream>
using namespace std;
class Test{
	private:
		const int n;
		const int x=n+150;
		public:
			Test(): n(50){
				cout<<"The value of n is:"<<n<<endl;
				cout<<"The value of x is:"<<x<<endl;
			}
};
main(){
	Test T;
}
