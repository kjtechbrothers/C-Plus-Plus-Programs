#include<iostream>
using namespace std;
class student{
private:
    char name[40],city[40];
public:
    void input_data();
    void show_data();
};
class std_marks{
private:
    float math,com,phy,avg,total;
public:
    void input_marks();
    void show_marks();
};
class result:public student,public std_marks{
    public:
    void show_result(){
    cout<<"------------------------"<<endl;
    cout<<"|   COMPLETE RESULT    |"<<endl;
    cout<<"------------------------"<<endl;
    show_data();
    show_marks();

        }

};
void student::input_data(){
cout<<"Enter the name of the student:";
cin.getline(name,40);
cout<<"Enter the name of the city:";
cin>>city;
}
void student::show_data(){
    cout<<"The name of the student is:"<<name<<endl;
    cout<<"The name of the city is:"<<city<<endl;
}

void std_marks::input_marks(){
    cout<<"Enter the marks of Math:";
    cin>>math;
    cout<<"Enter the marks of Computer:";
    cin>>com;
    cout<<"Enter the marks of Physics:";
    cin>>phy;
    total=math+com+phy;
    avg=total/3;
    cout<<"The total marks are:"<<total<<endl;
    cout<<"The average marks are:"<<avg<<endl;
}
void std_marks::show_marks(){
  cout<<"The marks of Math are:"<<math<<endl;
    cout<<"The marks of Computer are:"<<com<<endl;
    cout<<"The total marks are:"<<total<<endl;
    cout<<"The Average marks are:"<<avg<<endl;
}
main(){
result res;
res.input_data();
res.input_marks();
res.show_result();
}
