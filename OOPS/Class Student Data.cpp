#include<iostream>
using namespace std;
class Student{
	private:
		char name[40];
		public:
			Student(){
			cout<<"Enter the name of the student:";
			cin.getline(name,40);
		}
			void show(){
				cout<<"The name of the student is:"<<name<<endl;
			}
};
main(){
	Student S;
	S.show();
}
