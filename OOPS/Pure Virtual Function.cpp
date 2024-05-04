#include<iostream>
using namespace std;
class parent{
public:
    virtual void show()=0;
};
class emp:public parent{
public:
    void show(){
        cout<<"THIS IS EMPLOYEE CLASS SHOW METHOD:"<<endl;
    }
};
class teacher:public emp{
public:
    void show(){
    cout<<"THIS IS TEACHER CLASS SHOW METHOD:"<<endl;
    }
};
main(){
parent*ptr[2];
ptr[0]=new emp;
ptr[1]=new teacher;
ptr[0]->show();
ptr[1]->show();
}
