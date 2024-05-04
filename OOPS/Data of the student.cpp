#include<iostream>
using namespace std;
class Student{
	private:
		char name[40];
		int ag;
		float cgp;
		public:
			Student(){
				cout<<"------------Enter the data of the student---------------"<<endl;
				cout<<"Enter the name of the student:"<<endl;
				cin.getline(name,40);
				cout<<"Enter the Ag nmuber of the student:"<<endl;
				cin>>ag;
				cout<<"Enter the CGP of the student:"<<endl;
				cin>>cgp;
			}
			void show(){
				cout<<"The name of the student is:"<<name<<endl;
				cout<<"The Ag number of the student is:"<<ag<<endl;
				cout<<"The CGP of the student is:"<<cgp;
			}
};
main(){
	Student S1,S2,S3,S4,S5;
	cout<<"------------DATA OF STUDENT 1----------------"<<endl;
	S1.show();
	cout<<"------------DATA OF STUDENT 2----------------"<<endl;
    S2.show();
    cout<<"------------DATA OF STUDENT 3----------------"<<endl;
    S3.show();
    cout<<"------------DATA OF STUDENT 4----------------"<<endl;
    S4.show();
    cout<<"------------DATA OF STUDENT 5----------------"<<endl;
    S5.show();
}
