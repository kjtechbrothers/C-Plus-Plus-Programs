#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			Test():n(30){
				cout<<"The constructor is called..."<<endl;
			}
			Test(int num){
				n=num;
			}
			void display(){
				cout<<"n:"<<n<<endl;
			}
};
main(){
	Test T(20),X;
	X.display();
	T.display();
}
