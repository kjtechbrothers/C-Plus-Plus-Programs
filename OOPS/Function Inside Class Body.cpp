#include<iostream>
using namespace std;
class student{
	public:
		int rollno=10;
		public:
			void display(){
				cout<<"The Roll Number is:";
				cout<<rollno<<endl;
			}
};
main()
{
	student s;
	s.display();
}
