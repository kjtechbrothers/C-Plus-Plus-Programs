#include<iostream>
using namespace std;
class Test{
	private:
		int n,x,y;
		public:
		Test():n(10),x(30),y(100){
			cout<<"The constructor is called..."<<endl;
		}
		void display(){
			cout<<"n:"<<n<<endl;
			cout<<"x:"<<x<<endl;
			cout<<"y:"<<y<<endl;
		}
};
main(){
	Test T;
	T.display();
}
