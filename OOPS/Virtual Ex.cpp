#include<iostream>
using namespace std;
class parent{
public:
   virtual void show(){
        cout<<"MY NAME IS KASHIF JAVED:"<<endl;
    }
};
class test:public parent{
    void show(){
        cout<<"I READ IN AGRICULTURE UNIVERSITY:"<<endl;
    }
};
class kashif:public test{
public:
    void show(){
        cout<<"NOW,I AM IN THIRD SEMESTER:"<<endl;
    }
};
main(){
    parent objpa;
    test objt;
    kashif objkj;
    parent*ptr;
    ptr=&objpa;
    ptr->show();
    ptr=&objt;
    ptr->show();
    ptr=&objkj;
    ptr->show();
}
