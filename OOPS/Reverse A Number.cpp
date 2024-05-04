#include<iostream>
using namespace std;
int main()
{
    int n,a,b,s;
    cout<<"Enter a three digit number:";
    cin>>n;
    a=n/100;
    n=n%100;
    b=n/10;
    n=n%10;
    cout<<"The three digit number in reverse order is:"<<n<<b<<a<<endl;
    s=n+b+a;
    cout<<"The sum of three digit number is:"<<s;

}
