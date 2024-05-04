#include<iostream>
using namespace std;
class Counter{
	private:
		static int count;
		public:
			Counter(){
				count++;
			}
			void showcount(){
				cout<<"You created "<<count<<" object of this class..."<<endl;
			}
};
int Counter::count = 0;
main(){
	Counter C,C1,C2;
	C.showcount();
}
