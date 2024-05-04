#include<iostream>
using namespace std;
class Parent{
public:
    void show(){
        cout<<"This is the Parent Class show method:";
    }
};
main(){
    Parent*ptr;
    ptr=new Parent;
    ptr->show();
}
