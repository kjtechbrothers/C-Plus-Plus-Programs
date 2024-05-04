#include<iostream>
using namespace std;
template <class T>
T Min(T n, T m){
    if(n<m)
        return n;
    else
        return m;
}
main(){
    int r;
    r=Min(45,12);
    cout<<"The 1st minimum value is:"<<r<<endl<<endl;
    float res;
    res=Min(98.0,0.0986);
    cout<<"The 2nd minimum value is:"<<res<<endl;
}
