#include<iostream>
using namespace std;
class person{
public:
    virtual void show(){
        cout<<"THIS IS PERSON CLASS SHOW METHOD:"<<endl;
    }
};
class emp:public person{
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
    person*ptr[5];
    int op,i;
    cout<<"Enter Any Key\n 1:-PERSON CLASS\n 2:-EMPLOYEE CLASS\n 3:-TEACHER CLASS"<<endl;
    for(i=0;i<5;i++){
    cout<<"Which Class You Want To Create:";
    cin>>op;
    if(op==1)
        ptr[i]=new person;
    else if(op==2)
        ptr[i]=new emp;
    else
        ptr[i]=new teacher;
}
for(i=0;i<5;i++)
    ptr[i]->show();
}
