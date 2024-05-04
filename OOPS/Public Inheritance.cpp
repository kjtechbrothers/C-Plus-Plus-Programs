#include<iostream>
using namespace std;
class parent{
private:
    int a;
protected:
    int b;
public:
    int c;
};
class child:public parent{
    public:
    void input(){

        cout<<"Enter the value of b:";
        cin>>b;
        cout<<"Enter the value of c:";
        cin>>c;
    }
    void show(){
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
    }
};
main(){
    child obj1;
    obj1.input();
    obj1.show();

}
