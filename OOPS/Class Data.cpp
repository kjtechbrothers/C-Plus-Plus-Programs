#include<iostream>
#include<string.h>
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
cin>>ag<<endl;
cout<<"Enter the CGP of the student:";
cin>>cgp<<endl;
}
void show(){
cout<<"The name of the student is:"<<name<<endl;
cout<<"The Ag number of the student is:"<<ag<<endl;
cout<<"The CGP of the student is:"<<cgp<<endl;
}
};
main(){
    Student S1;
    cout<<"------------------------ENTER THE DATA OF FIRST STUDENT-----------------"<<endl;
S1.show();
}
