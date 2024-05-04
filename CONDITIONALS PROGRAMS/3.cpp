#include<iostream>
using namespace std;
int main()
{
	int Salary,grade,Bonous,Gross;
	cout<<"Enter your salary=";
	cin>>Salary;
	cout<<"Enter your grade=";
	cin>>grade;
	if(grade>=16)
	{
		Bonous=(Salary*25)/100;
		Gross=Salary+Bonous;
	}
	else if(grade<16 || grade<=14)
	{
		Bonous=(Salary*15)/100;
		Gross=Salary+Bonous;
	}
	else if (grade<14)
	{
		Bonous=(Salary*8)/100;
		Gross=Salary+Bonous;
	}
	else
	cout<<"Default";
	cout<<"Gross Salary="<<Gross<<endl;
	return 0;
	
}
