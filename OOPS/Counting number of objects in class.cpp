#include<iostream>
using namespace std;
class Counter{
	private:
		static int count;
		public:
			Counter(){
				count++;
				showobject();
			}
			void showobject(){
				system("cls");
				cout<<"The total object is:"<<count<<endl;
			}
};
int Counter :: count=0;
main()
{
	Counter C1,C2,C3,C4,C5;
}
