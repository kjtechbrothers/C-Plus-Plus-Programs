#include<iostream>
using namespace std;
class Student{
private:
    int rollno=10;
public:
    void display();
};
void Student::display(){
    cout<<"The roll number is:"<<rollno;
}
main(){
    Student S;
    S.display();
}
