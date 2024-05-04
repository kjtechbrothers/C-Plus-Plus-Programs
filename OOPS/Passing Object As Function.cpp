#include<iostream>
using namespace std;
class Distance{
	public:
	Distance(): km(0),hr(0){
	}
		void get() {
			cout<<"Enter distance in kilometers:";
			cin>>km;
			cout<<"Enter hours of distance:";
			cin>>hr;
		}
	void show(){
		cout<<"Your Traveling is "<<km<<" kilometers in "<<hr<<" hours "<<endl;
	}	
	void totalDis(Distance pas){
		Distance t;
		t.km = km + pas.km;
		t.hr = hr + pas.hr;
		cout<<"Total Traveled hours is "<<t.km<<" kilometers in "<<t.hr<<" hours "<<endl;
	}
	private:
		int km,hr;
};
main()
{
	Distance youdis,mydis;
	cout<<"----------Your Input Of Distance-----------"<<endl;
	youdis.get();
	youdis.show();
	cout<<"----------My Input Of Distance-----------"<<endl;
	mydis.get();
	mydis.show();
	cout<<"----------Total Output Of Distance-----------"<<endl;
	youdis.totalDis(mydis);
}
