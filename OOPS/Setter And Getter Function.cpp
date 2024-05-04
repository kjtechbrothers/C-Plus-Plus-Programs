#include<iostream>
#include<string.h>
using namespace std;
class Book{
	private:
		int page;
		float price;
		char name[40];
		public:
			void setPage(int p){
				page=p;
			}
			void setPrice(float pr){
				price=pr;
			}
			void setName(char*n){
				strcpy(name,n);
			}
			int getPage(){
				return page;
			}
			float getPrice(){
				return price;
			}
			string getName(){
				return name;
			}
};
main()
{
	Book b1,b2;
	cout<<"-----Book1 Data-----"<<endl;;
	b1.setPage(500);
	b1.setPrice(1000);
	b1.setName("Web Programing");
	cout<<"Book1 pages are:"<<b1.getPage()<<endl;
	cout<<"Book1 price is:"<<b1.getPrice()<<endl;
	cout<<"Book1 name is:"<<b1.getName()<<endl;
	cout<<"-----Book2 Data-----"<<endl;
	b2.setPage(800);
	b2.setPrice(1300);
	b2.setName("Tumhara Husan Ka Nam");
	cout<<"Book2 pages are:"<<b2.getPage()<<endl;
	cout<<"Book2 price is:"<<b2.getPrice()<<endl;
	cout<<"Book2 name is:"<<b2.getName()<<endl;
}

