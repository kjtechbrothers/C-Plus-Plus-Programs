#include<iostream>
using namespace std;
class student{
	private:
		int rollno;
		char name[30];
		public:
			void inputdata(){
				cout<<"Enter the roll number:";
				cin>>rollno;
				cout<<"Enter the name:";
				cin>>name;
			}
};
main()
{
	student s;
	cout<<"----------Input Data------------"<<endl;
	s.inputdata();
}
