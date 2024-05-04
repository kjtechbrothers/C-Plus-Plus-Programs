#include<iostream>
using namespace std;
class Test{
	public:
		static void show(){
			cout<<"This is a static memeber function.";
		}
};
main(){
	Test::show();
}
