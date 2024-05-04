#include<iostream>
using namespace std;
class Test{
	private:
		int num;
		public:
			Test():num(0){
				cout<<"Constructor is called....."<<endl;
			}
			friend void show(Test obj1);
};
void show(Test obj1){
	obj1.num=10;
	cout<<"The value of num is:"<<obj1.num<<endl;
}
main(){
	Test obj1;
	show(obj1);
}
