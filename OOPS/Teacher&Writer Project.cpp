#include<iostream>

using namespace std;
class Teacher{
private:
    std::string tname,taddress;
    int age;
public:
    void inputdata(){
        cout<<"----------------------------------"<<endl;
        cout<<"|ENTER THE DETAILS OF THE TEACHER|"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"Enter the name of the teacher:";
        getline(std::cin,tname);
        cout<<"Enter the address of the teacher:";
        getline(std::cin,taddress);
        cout<<"Enter the age of the teacher:";
        cin>>age;
    }
    void show(){
        cout<<"------------------------"<<endl;
        cout<<"|DETAILS OF THE TEACHER|"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"The name of the teacher is:"<<tname<<endl;
        cout<<"The address of the teacher is:"<<taddress<<endl;
        cout<<"The age of the teacher is:"<<age<<endl;
    }
};
class Writer{
private:
    std::string wname,waddress;
    int nobook;
public:
    void inputdata(){
        std::cin.get();
        cout<<"---------------------------------"<<endl;
        cout<<"|ENTER THE DETAILS OF THE WRITER|"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Enter the name of the writer:";
        getline(std::cin,wname);
        cout<<"Enter the address of the writer:";
        getline(std::cin,waddress);
        cout<<"Enter the number of the books:";
        cin>>nobook;
    }
    void show(){
        cout<<"-----------------------"<<endl;
        cout<<"|DETAILS OF THE WRITER|"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"The name of the writer is:"<<wname<<endl;
        cout<<"The address of the writer is:"<<waddress<<endl;
        cout<<"THe number of the books are:"<<nobook<<endl;
    }
};
class Scholar:public Teacher,public Writer{
public:
    void inputdata(){
        Teacher::inputdata();
        Writer::inputdata();
    }
    void show(){
        Teacher::show();
        Writer::show();
    }
};
main(){
    Scholar objS;
    objS.inputdata();
    objS.show();
}
