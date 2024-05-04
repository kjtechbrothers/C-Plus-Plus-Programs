#include<iostream>
using namespace std;
class Student{
private:
    int rollno;
public:
    void inputdata(){
        cout<<"Enter the roll number:";
        cin>>rollno;
    }
    void show(){
        cout<<"The roll number is:"<<rollno;
    }
};
main(){
    Student S;
    S.inputdata();
    S.show();
}
