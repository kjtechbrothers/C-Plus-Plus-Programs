#include<iostream>
using namespace std;
class student{
	private:
		int rollno=10;
		public:
			void display();
};
void student :: display(){
	cout<<"The Roll No Is:";
	cout<<rollno;
}
main()
{
	student s;
	s.display();
}
