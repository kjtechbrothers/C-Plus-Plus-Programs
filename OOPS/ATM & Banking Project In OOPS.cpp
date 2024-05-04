#include<iostream>
using namespace std;
class Bank{
	private:
		char name[40],actype[40];
		int bal,acno;
		public:
			Bank(){
				cout<<"Enter Account Name:";
				cin.getline(name,40);
				cout<<"Enter Account Type:";
				cin.getline(actype,40);
				cout<<"Enter Account Number:";
				cin>>acno;
				cout<<"Enter Opening Balance:";
				cin>>bal;
			}
			void deposit(int amt ){
				bal=bal+amt;
				cout<<"Total amount after deposit:"<<bal<<endl;
				system("pause");
			}
			void withdraw(int amt){
				if(amt>bal)
				cout<<"Sorry,your amount is greater than the account balance..."<<endl;
				else
				{
					bal=bal-amt;
					cout<<"Balance after withdraw:"<<bal<<endl;
					system("pause");
				}
			}
			void display(){
				cout<<"--------------Account Details-------------"<<endl;
				cout<<"Account Name:"<<name<<endl;
				cout<<"Account Type:"<<actype<<endl;
				cout<<"Account Number:"<<acno<<endl;
				cout<<"Current Balance:"<<bal<<endl;
				system("pause");
			}
			void exit(){
			cout<<"Thank You for your participation....."<<endl;
			system("pause");
			}
};
main(){
	Bank objBank;
	int amount,choice;
	do{
		system("cls");
		cout<<"----------------------------MAIN MENU----------------------------------------"<<endl;
		cout<<"1:-Deposit Money"<<endl;
		cout<<"2:-Withdraw Money"<<endl;
		cout<<"3:-Display Money"<<endl;
		cout<<"4:-Exist"<<endl;
		cout<<"Enter Any Choice:";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter the amount to deposit:";
				cin>>amount;
				objBank.deposit(amount);
				break;
				case 2:
					cout<<"Enter the amount to withdraw:";
					cin>>amount;
					objBank.withdraw(amount);
					break;
					case 3:
						objBank.display();
						break;
						case 4:
						    objBank.exit();
							break;
							default:
								cout<<"You choice invalid option....";
		}
	}while(1);
}
