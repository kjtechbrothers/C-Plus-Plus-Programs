#include<iostream>
using namespace std;
class B;
class A{
	private:
		int num1;
		public:
			void getValueA();
			friend void Add(A,B);
};
void A::getValueA(){
	cout<<"Enter the first number:";
	cin>>num1;
}
class B{
	private:
		int num2;
		public:
			void getValueB();
			friend void Add(A,B);
};
void B::getValueB (){
	cout<<"Enter the secon number:";
	cin>>num2;
}
void Add(A obj1,B obj2){
	cout<<"The sum of first and second number is:"<<obj1.num1+obj2.num2;
}
main(){
	A obj1;
	B obj2;
    obj1.getValueA();
    obj2.getValueB();
    Add(obj1,obj2);
}
