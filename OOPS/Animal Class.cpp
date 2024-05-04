#include<iostream>
#include<string.h>
using namespace std;
class Animal{
protected:
    int age;
    char name[20];
public:
    void set_data(int a,char n[]){
        age=a;
        strcpy(name,n);
    }
};
class Zebra:public Animal{
public:
    void show_Z(){
        cout<<"The name of the Zebra is "<<name<<" and the age is "<<age<<" and the Zebra came from South Africa."<<endl;
    }
};
class Dolphin:public Animal{
public:
    void show_D(){
        cout<<"The name of the Dolphin is "<<name<<" and the age is "<<age<<" and the Dolphin came from Antarctica."<<endl;
    }

};
main(){
    Zebra Z;
    Dolphin D;
    char n1[10]="LIGER",n2[10]="WHISLAEY";
    Z.set_data(10,n1);
    Z.show_Z();
    D.set_data(20,n2);
    D.show_D();
}
