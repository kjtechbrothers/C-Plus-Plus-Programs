#include<iostream>
using namespace std;
class parent{
private:
    int a,b;
public:
    parent(int p1,int p2){
    a=p1;
    b=p2;
    }
    void show(){
    cout<<"The first value of parent class is:"<<a<<endl;
    cout<<"The second value of parent class is:"<<b<<endl;
    }
};
class child:public parent{
private:
    int x,y;
public:
    child(int p1,int p2,int c1,int c2):parent (p1,p2){
    x=c1;
    y=c2;
    }
    void display(){
    cout<<"The first value of child class is:"<<x<<endl;
    cout<<"The second value of child class is:"<<y<<endl;
    }
};
main(){
    child obj(22,44,88,99);
    obj.show();
    obj.display();
}
