#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		void displayMessage(string name){
			cout<<"Welcome to "<<name<<" In UAF Okara";
		}
};
main()
{
	string studentName;
	Student S1;
	cout<<"Please enter the name:";
	getline(cin,studentName);
	S1.displayMessage(studentName);
}
