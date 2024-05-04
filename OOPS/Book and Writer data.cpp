#include<iostream>
#include<string.h>
using namespace std;
class Book{
private:
    int bookid;
    std::string bookname;
    float price;
public:
    void inputdata(){
        static int count=0;
        cout<<"--------------------------------"<<endl;
        cout<<"|ENTER THE DETAILS OF THE BOOKS|"<<endl;
        cout<<"--------------------------------"<<endl<<count+1<<endl;
        count++;
        cout<<"Enter The Book ID:";
        cin>>bookid;
        std::cin.get();
       std::cout<<"Enter The Book Name:";
        getline(std::cin,bookname);
        cout<<"Enter The Price Of The Book:";
        cin>>price;
    }
    void show(){
        cout<<"The Book ID Is:"<<bookid<<endl;
        cout<<"The Name Of The Book Is:"<<bookname<<endl;
        cout<<"The Price Of The Book Is:"<<price<<endl;
    }
};
class Writer{
private:
    std::string Wname,Waddress;
    Book objB[2];
public:
    void inputdata(){
        cout<<"Enter The Name Of THe Writer:";
        getline(std::cin,Wname);
        cout<<"Enter The Address Of The Writer:";
        getline(std::cin,Waddress);
        for(int i=0;i<2;i++)
            objB[i].inputdata();
    }
    void show(){
        cout<<"The Name Of The Writer Is:"<<Wname<<endl;
        cout<<"The Address Of The Writer Is:"<<Waddress<<endl;
        for(int i=0;i<2;i++)
            objB[i].show();
    }
};
main(){
    Writer objW;
    objW.inputdata();
    cout<<"--------------------------"<<endl;
    cout<<"|DETAILS OF THE BOOKS ARE|"<<endl;
    cout<<"--------------------------"<<endl;
    objW.show();
}
