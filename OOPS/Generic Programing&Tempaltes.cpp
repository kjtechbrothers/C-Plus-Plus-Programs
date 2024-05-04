#include<iostream>
using namespace std;
template <class T>
T Max(T n,T m){
    if(n>m)
        return n;
    else
        return m;
}
main(){
    int r;
    r=Max(7,9);
    cout<<"The 1st maximum value is:"<<r<<endl;
    float res;
    res=Max(78.9,98.9);
    cout<<"The 2nd maximum value is:"<<res;
}
