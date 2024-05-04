#include<iostream>
using namespace std;
class Test{
	public:
		Test(){
			cout<<"Constructor is called...."<<endl;	
		}
		Test(){
			cout<<"Destructor is called...."<<endl;
		}
};
void objcreate(){
	Test T1;
}
main(){
	objcreate();
}
