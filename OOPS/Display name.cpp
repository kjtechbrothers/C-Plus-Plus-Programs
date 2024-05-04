#include<iostream>
using namespace std;
class name{
	private:
		char n[30];
		public:
			void show(){
				cout<<"Enter the name:";
				cout<<n<<endl;
			}
};
main()
{
	name n;
	n.show();
	n.show();
}
