#include<iostream>
using namespace std;
class A{
public:
    A(){
    cout<<"TUMHARA HUSAN KA NAM"<<endl;
    }
};
class B{
public:
    B(){
    cout<<"2022-AG-9249"<<endl;
    }
};
class C:public A,public B{
public:
    C(){
    cout<<"MERI ZINDAGI"<<endl;
    }
};
main(){
    C objc;
}
