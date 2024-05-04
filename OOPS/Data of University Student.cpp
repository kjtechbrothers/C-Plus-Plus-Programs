#include<iostream>
#include<string.h>
using nammespace std;
class Student{
	private:
		char name[40];
		int ag;
		float cgp;
		public:
			Student(){
				cout<<"Enter the name of the student:";
				cin.getline(name,40);
				cout<<"Enter the Ag number of the student:";
				cin>>ag;
				cout<<"Enter the CGP of the student:";
				cin>>cgp;
			}
			void show(){
				cout<<"The name of the stuent is:";
				cin>>name;
				cout<<"The Ag number of the student is:";
				cin>>ag;
				cout<<"The CGP of the student is:";
				cin>>cgp;
			}
};
main(){
	Student S1;
	S1.show();
}
