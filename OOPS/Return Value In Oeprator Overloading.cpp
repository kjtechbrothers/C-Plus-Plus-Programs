#include<iostream>
using namespace std;
class Distance{
	private:
		int feets;
		float inches;
		public:
			Distance():feets(0),inches(0){
			}
			Distance(int f, float in): feets(f),inches(in){	
			}
			void display(){
				cout<<"Feets"<<feets<<" inches"<<inches<<endl;
			}
			void operator ++(){
				feets++;
				inches++;
			}
};
main(){
	Distance d1(3,6.8);
	cout<<"Values before increment:"<<endl;
     d1.display();
     cout<<"Values  after increment:"<<endl;
     ++d1;
     d1.display();
}
