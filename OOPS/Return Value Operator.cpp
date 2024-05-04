#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			Test():n(0){
				
			}
			void getvalue(){
			cout<<"Enter  the value:";
			cin>>n;
			}
			Test operator+(Test obj){
				Test t;
				t.n=n+obj.n;
				return t;
			}
			int display(){
				return n;
				
			}
				Test operator-(Test obj){
				Test t;
				t.n=n-obj.n;
				return t;
			}
				Test operator*(Test obj){
				Test t;
				t.n=n*obj.n;
				return t;
			}
				Test operator/(Test obj){
				Test t;
				t.n=n/obj.n;
				return t;
			}
				Test operator%(Test obj){
				Test t;
				t.n=n%obj.n;
				return t;
			}
};
main(){
	Test obj1,obj2,sum,sub,mul,div,mod;
	cout<<"Enter the data of first memeber:"<<endl;
	obj1.getvalue();
	cout<<"Enter the data of second member:"<<endl;
	obj2.getvalue();
	cout<<"-----------Operations------------"<<endl;
	sum=obj1+obj2;
	cout<<"Addition is:"<<sum.display()<<endl;
	sub=obj1-obj2;
	cout<<"Subtraction is:"<<sub.display()<<endl;
	mul=obj1*obj2;
	cout<<"Multiplication is:"<<mul.display()<<endl;
	div=obj1/obj2;
	cout<<"Division is:"<<div.display()<<endl;
	mod=obj1%obj2;
	cout<<"Modulus is:"<<mod.display()<<endl;
}










