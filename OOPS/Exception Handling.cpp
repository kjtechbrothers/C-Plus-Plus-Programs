#include<iostream>
using namespace std;
main(){
    float a,b,x;
    try{
    cout<<"Enter the first value:";
    cin>>a;
    cout<<"enter the second value:";
    cin>>b;
    if(b==0)
        throw 0;
    x=a/b;
    cout<<"The result is:"<<x;
    }
    catch(int){
        cout<<"Cannot divide by zero:";
    }

}
