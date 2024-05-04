#include<iostream>
using namespace std;
class marks{
private:
    char name[40],city[40];
    int ag;
    float cgp;
public:
    void input(){
        cout<<"Enter the name of the student:";
        cin.getline(name,40);
        cout<<"Enter the name of the city:";
        cin.getline(city,40);
        cout<<"Enter the Ag number of the student:";
        cin>>ag;
        cout<<"Enter the CGP of the student:";
        cin>>cgp;
    }
    void show(){
        cout<<"----------------DETAILS OF THE STUDENT-----------------"<<endl;
        cout<<"|The name of the city of the student is:"<<city<<endl;
        cout<<"|The Ag number of the student is:"<<ag<<endl;
        cout<<"|The CGP of the student is:"<<cgp<<endl;
        cout<<"-------------------------------------------------------"<<endl;
    }
};
main(){
    marks*ptr[2];
    for(int i=0;i<2;i++){
        ptr[i]=new marks;
        ptr[i]->input();
        ptr[i]->show();
    }

}
