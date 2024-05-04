#include<iostream>
using namespace std;
class Distance{
	private:
		int feets;
		float inches;
		public:
			Distance():feets(0),inches(0){
				
			}
			Distance(int f,float in):feets(f),inches(in){
				
			}
			int operator<(Distance d){
				if((feets<d.feets)&&(inches<d.inches))
				return 1;
				else return 0;
			}
			void display(){
				cout<<"Feets="<<feets<<" Inches="<<inches<<endl;
			}
};
main(){
	Distance d1(8,6.7);
	Distance d2(6,7.8);
    cout<<"d1:";d1.display();
	cout<<"d2:";d2.display();
	if(d1<d2)
	cout<<"D1 is less then D2"<<endl;
	else
	cout<<"D2 is less than D1"<<endl;
	
	
}
