#include<iostream>
using namespace std;
class Publication{
protected:
    float price;
public:
    void getdata(){
        cout<<"Enter the price of the book:";
        cin>>price;
    }
    void show(){
        cout<<"The price of the book is:"<<price<<endl;
    }
};
class Book:public Publication{
private:
    int pagecount;
public:
    void getdata(){
        cout<<"Enter the number of pages:";
        cin>>pagecount;
        Publication::getdata();
    }
    void show(){
        cout<<"The number of pages of book are:"<<pagecount<<endl;
        Publication::show();
    }
};
class Tape:public Publication{
private:
    float time;
public:
    void getdata(){
        cout<<"Enter the time in minutes:";
        cin>>time;
    }
    void show(){
        cout<<"The time in minutes is:"<<time;
    }
};
main(){
    Book B;
    Tape T;
    cout<<"-------------------"<<endl;
    cout<<"|ENTER THE DETAILS|"<<endl;
    cout<<"-------------------"<<endl;
    B.getdata();
    T.getdata();
    cout<<"-----------------"<<endl;
    cout<<"|THE DETAILS ARE|"<<endl;
    cout<<"-----------------"<<endl;
    B.show();
    T.show();
}
