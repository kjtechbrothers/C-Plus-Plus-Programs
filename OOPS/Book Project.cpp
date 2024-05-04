#include<iostream>
#include<string.h>
using namespace std;
class Book{
private:
    int bookid;
    char name[40];
    float price;
public:
    void inputdata(){
        cout<<"ENTER THE BOOK ID:";
        cin>>bookid;
        cout<<"ENTER NAME OF THE BOOK:";
        cin.getline(name,40);
        cout<<"ENTER THE PRICE OF THE BOOK:";
        cin>>price;
    }
    void show(){
        cout<<"THE BOOK ID IS:"<<bookid<<endl;
        cout<<"THE NAME OF THE BOOK IS:"<<name<<endl;
        cout<<"THE PRICE OF THE BOOK IS:"<<price<<endl;
    }
};
class Writer{
public:
    char name[40],address[40];
    Book objB[2];
    void inputdata(){
        cout<<"ENTER THE NAME OF THE WRITER:";
        cin.getline(name,40);
        cout<<"ENTER THE ADDRESS OF THE WRITER:";
        cin.getline(address,40);
        for(int i=0;i<5;i++)
            objB[i].inputdata();
    }
    void show(){
        cout<<"THE NAME OF THE WRITER IS:"<<name<<endl;
        cout<<"THE ADDRESS OF THE WRITER IS:"<<address<<endl;
        for(int i=0;i<5;i++)
            objB[i].show();
    }
};
main()
{
    Writer objW;
    objW.inputdata();
    objW.show();

}

