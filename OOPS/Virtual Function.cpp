#include<iostream>
using namespace std;
class parent{
public:
    virtual void show(){
        cout<<"THIS IS PERSON SHOW METHOD:"<<endl;
    }
};
class emp:public parent{
public:
    void show(){
        cout<<"THIS IS EMPLOYEE SHOW METHOD:"<<endl;
    }
};
class pro:public emp{
    void show(){
        cout<<"THIS IS PROGRAMER SHOW METHOD:"<<endl;
    }
};
main(){
    parent objpa;
    emp objem;
    pro objpr;
    parent*ptr;
    ptr=&objpa;
    ptr->show();
    ptr=&objem;
    ptr->show();
    ptr=&objpr;
    ptr->show();
}

