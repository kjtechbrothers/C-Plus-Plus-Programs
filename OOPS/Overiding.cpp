#include<iostream>
using namespace std;
class Parent{
public:
    void show(){
    cout<<"This is Parent Class show method:"<<endl;
    }
};
class Child:public Parent{
public:
    void show(){
        cout<<"This is Child Class show method:"<<endl;
    }
};
main(){
    Child obj;
    obj.Parent::show();
    obj.show();
}
