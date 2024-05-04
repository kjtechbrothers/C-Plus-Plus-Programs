#include<iostream>
using namespace std;
class Parent{
public:
    void show(){
        cout<<"THIS IS THE PARENT CLASS SHOW METHOD"<<endl;
    }
};
main(){
    Parent*ptr[5];
    for( int i=0;i<5;i++){
        ptr[i]->show();
    }
}
