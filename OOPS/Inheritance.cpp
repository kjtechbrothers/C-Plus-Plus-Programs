#include<iostream>
using namespace std;
class Animal{
public:
    int leg=4;
};
class Dog:public Animal{
public:
 int tail=1;
};
main(){
    Dog d;
    cout<<"The legs of dog are:"<<d.leg<<endl;
    cout<<"The tail of dog is:"<<d.tail;
}
