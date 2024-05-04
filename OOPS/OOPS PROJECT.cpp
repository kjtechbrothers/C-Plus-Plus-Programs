#include<iostream>
#include<string.h>
using namespace std;
class Player{
	private:
		int age;
		char name[40],team[40];
		public:
			Player(){
				cout<<"Enter the name of the player:"<<endl;
				cin.getline(name,40);
				cout<<"Enter the name of the team:"<<endl;
				cin.getline(team,40);
				cout<<"Enter the age of the player:";
				cin>>age;
			}
			void input(){
				cout<<"Enter player name:"<<endl;
				cin>>name;
				cout<<"Enter team name:"<<endl;
				cin>>team;
				cout<<"Enter age of the player:"<<endl;
				cin>>age; 
			}
			void display(){
				cout<<"Player name is:"<<name<<endl;
				cout<<"Player team is:"<<team<<endl;
				cout<<"Player age is:"<<age<<endl;
				system("pause");
			}
			void change(char n[40], char t[40], int a){
				strcpy(name,n);
				strcpy(team,t);
				age=a;
			}
};
main(){
	int choice;
		Player p;
		do{
			system("cls");
			cout<<"<<<<<<<<Main Menu>>>>>>>>>"<<endl;
			cout<<"1:Input Player Data"<<endl;
			cout<<"2:Display Player Data"<<endl;
			cout<<"3:Change Player Data"<<endl;
			cout<<"4:Exist"<<endl;
			cout<<"Enter any choice"<<endl;
			cin>>choice;
			switch(choice){
				case 1:
					p.input();
					break;
				case 2:
					p.display();
					break;
				case 3:
					p.change("shahid","pakistan",40);
					break;
				case 4:
					exit(1);
					break;
					default:
						cout<<"You choice invalid option"<<endl;
			}
		} while(1);
}
