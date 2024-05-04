#include<iostream>
using namespace std;
template<class Type>
class Test{
private:
    Type n;
public:
    void getvalue(){
    cin>>n;
    }
    void print(){
        cout<<"You entered:"<<n<<endl;
    }
};
main(){
    Test<int> objint;
    cout<<"Enter Integer Value:";
    objint.getvalue();
    objint.print();
    Test<float> objfloat;
    cout<<"Enter Real Value:";
    objfloat.getvalue();
    objfloat.print();
    Test<char> objchar;
    cout<<"Enter Alphabetic Value:";
    objchar.getvalue();
    objchar.print();
}
