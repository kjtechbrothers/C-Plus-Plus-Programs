#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			void getvalue(){
			cout<<"Enter the number:";
			cin>>n;
		}
			void operator+(Test obj){
				Test t;
				t.n=n+obj.n;
				cout<<"The addition of two numbers are:"<<t.n<<endl;
			}
			void operator-(Test obj){
				Test t;
				t.n=n-obj.n;
				cout<<"The subtraction of two  numbers  are:"<<t.n<<endl; 
			}
			void operator*(Test obj){
				Test t;
				t.n=n*obj.n;
				cout<<"The product of two numbers are:"<<t.n<<endl;
			}
			void operator/(Test obj){
				Test t;
				t.n=n/obj.n;
				cout<<"The division of two numbers are:"<<t.n<<endl;
			}
};
main(){
	Test obj1,obj2;
	cout<<"Enter the data of first member:"<<endl;
	obj1.getvalue();
	cout<<"Enter the data of second object:"<<endl;
	obj2.getvalue();
	obj1+obj2;
	obj1-obj2;
	obj1*obj2;
	obj1/obj2;
}
