#include<iostream>
#include<string.h>
using namespace std;
class TV{
private:
    float price;
    char Brandname[10],TVModel[15];
public:
    TV(char b[10],char m[15],float p){
        strcpy(Brandname,b);
        strcpy(TVModel,m);
        price=p;
    }
    void change(char b[10],char m[15],float p){
        strcpy(Brandname,b);
        strcpy(TVModel,m);
        price=p;
    }
    void show(){
        cout<<"THE BRAND NAME OF THE TV:"<<Brandname<<endl;
        cout<<"THE NAME OF THE TV MODEL:"<<TVModel<<endl;
        cout<<"THE PRICE OF THE TV:"<<price<<endl;
    }
};
main(){
    TV T("SONY","STDV",60000);
    cout<<"-----------------------------------"<<endl;
    cout<<"|THE TV OBJECT VALUE BEFORE CHANGE|"<<endl;
    cout<<"-----------------------------------"<<endl;
    T.show();
    T.change("HAIER","HD",45000);
    cout<<"----------------------------------"<<endl;
    cout<<"|THE TV OBJECT VALUE AFTER CHANGE|"<<endl;
    cout<<"----------------------------------"<<endl;
    T.show();
}
