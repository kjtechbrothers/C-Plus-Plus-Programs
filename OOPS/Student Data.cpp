#include<iostream>
using namespace std;
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
cout<<"The name of the student is:"<<name<<endl;
cout<<"The Ag  number of the student is:"<<ag<<endl;
cout<<"The CGP of the student is:"<<cgp<<endl;
}
};
main(){
Student S1,S2,S3,S4,S5;
cout<<"-------------------DATA OF FIRST STUDENT--------------------------"<<endl;
S1.show();
cout<<"-------------------DATA OF SECOND STUDENT-------------------------"<<endl;
S2.show();
cout<<"-------------------DATA OF THIRD STUDENT--------------------------"<<endl;
S3.show();
cout<<"-------------------DATA OF FOURTH STUDENT-------------------------"<<endl;
S4.show();
cout<<"-------------------DATA OF FIFTH STUDENT--------------------------"<<endl;
S5.show();
}
