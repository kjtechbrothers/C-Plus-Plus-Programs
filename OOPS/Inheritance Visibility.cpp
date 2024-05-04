#include<iostream>
using namespace std;
class Parent{
protected:
    int n1,n2;
public:
    void show(){
    cout<<"The value of n1 is:"<<n1<<endl;
    cout<<"The value of n2 is:"<<n2<<endl;
    }
};
class Child:public Parent{
public:
    void input(){
        cout<<"Enter the value of n1:";
        cin>>n1;
        cout<<"Enter the value of n2:";
        cin>>n2;
    }
};
main(){
    Child obj1;
    obj1.input();
    obj1.show();

}
