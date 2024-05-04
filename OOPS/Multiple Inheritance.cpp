#include<iostream>
using namespace std;
class person{
private:
    char name[50],gender[10];
    int age;
public:
    void getvalue(){
        cout<<"Enter the name of the person:";
        cin.getline(name,40);
        cout<<"Enter the age of the person:";
        cin>>age;
        cout<<"Enter the gender of the person:";
        cin>>gender;
    }
    void show(){
        cout<<"The name of the person is:"<<name<<endl;
        cout<<"The age of the person is:"<<age<<endl;
        cout<<"The gender of the person is:"<<gender<<endl;
    }
};
class emp:public person{
private:
    float sal;
    public:
    void getvalue(){
        person::getvalue();
        cout<<"Enter the salary of the person:";
        cin>>sal;
    }
    void show(){
        cout<<"The salary of the person is:"<<sal<<endl;
        person::show();
    }
};
class prog:public emp{
private:
    int num;
public:
    void getvalue(){
        emp::getvalue();
        cout<<"How many languages you know:";
        cin>>num;
    }
    void show(){
        cout<<"The person know "<<num<<" languages"<<endl;
        emp::show();
    }
};
main(){
    prog obj;
    obj.getvalue();
    cout<<"-----------------------"<<endl;
    cout<<"|DETAILS OF THE PERSON|"<<endl;
    cout<<"-----------------------"<<endl;
    obj.show();
}

