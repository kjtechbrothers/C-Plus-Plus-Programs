#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
 
	string N;
	int OP;
	int count,fact,x,i,n,sum,first,second,next,num;
	cout<<"Press (1) for Even And Odd by While Loop\n ";
	cout<<"Press (2) for check Factorial by While Loop\n ";
	cout<<"Press (3) for Making Table by While Loop\n ";
	cout<<"Press (4) for Make Fibonacci Series by While Loop\n ";
	cout<<"Press (5) for Print Number in Decending order by While Loop\n ";
	cout<<"Press (6) for Sum of series by While Loop \n";
	cout<<"Press (7) for How many time you want to print your name \n ";
	cout<<"Press (8) for increament of your numbers\n";
	cout<<"Press (9) for print odd numbers \n";
	cout<<"Press (10) for print even numbers \n";
	cin>>OP;
	
	switch(OP)
	{
		case 1:
			cout<<"\n\n\n\n\n\n";
			cout<<"\n\nEnter the Starting Number ";
			cin>>n;
			cout<<"Enter the Ending Number ";
			cin>>x;
			if(n%2==0 && x%2==0)
		{
				cout<<"Even number\n ";
				while(i<=x)
			   {
					cout<<i<<endl;
					i+=2;
					count++;
				}
				cout<<"\nThe Total numbers are :"<<count;
		}
			 
			else if(n%2!=0 && x%2!=0)
		{
					cout<<"Odd number\n ";
				while(i<=x)
				{
					cout<<i<<endl;
					i+=2;
					count++;
				}
				cout<<"\nThe Total numbers are :"<<count;
		}
		 
			else\
			{
				cout<<"\nError\n\n";
			}
			break;
			
	 case 2:
			cout<<"\n\nEnter the Number : ";
			cin>>n;
			fact=1;
		 
			 for(i=1; i<=n; i++)
		    {
		    	fact=fact*i;
		    	cout<<i<<"*"<<n;
		     
		    	count++;
			}
			cout<<"\nThe Total Numbers are :"<<count;
			cout<<"\nAnd there factorial is :"<<fact;
			 
			
		 
			break;
			
		 case 3:     
		cout<<"\n\nEnter the width of the Table : ";
		cin>>n;
		cout<<"Enter the Lenght of the Table :"	;
		cin>>x;
		 
		for(i=0; i<=x; i++)
		{
			cout<<i<<"*"<<n<<"="<<i*n<<endl;
		 
		}
	 
		break;
		
		case  4 : 
		cout<<"\n\nEnter the Number :";
		cin>>n;
		first=0;
		second=1;
		for(i=0; i<=n; i++)
		{
			cout<<first<<endl;
			next=first+second;
			first=second;
			second=next;
		 
		}
		 
		break;
		
		case  5:
		cout<<"\n\nEnter the Number :";
		cin>>n;
		
		for(i=0; i<=n; n--)
		{
			cout<<n<<endl;
			 
			
		}
		 
		break;
		 
		case 6:
			cout<<"\n\nEnter the Number :";
			cin>>n;
			sum=0;
			for(i=0; i<=n; i++)
			{
				cout<<i<<endl;
				sum=sum+i;
				 
				count++;
			}
			cout<<"\nThe total numbers are :"<<count;
			cout<<"\nAnd there sum is : "<<sum;
		 
			break;
			
		case 7:
			cout<<"\n\nEnter your name? :";
			cin>>N;
			cout<<"\nHow many times you want to print your name ? : ";
			cin>>x;
			
			for(i=1; i<=x; i++)
			{
				cout<<i<<"-"<<N<<endl;
				 
			}
		case 8:
			{
		   cout<<"Enter the Number  : ";
		    cin>>n;
		    x=n++;
		    int y=n+2;
		    cout<<x<<y;
		}	
		 
			 break;
		 case 9:
		 	cout<<"Enter the number : ";
		 	cin>>n;
		 	if(n%2!=0)
		 	{
		 		cout<<"\nOdd Numbers \n";
		 		
			 }
			 else 
			 cout<<"Not odd number";
			 break;
			  case 10:
		 	cout<<"Enter the number : ";
		 	cin>>n;
		 	if(n%2==0)
		 	{
		 		cout<<"\nOdd Numbers \n";
		 		
			 }
			 else 
			 cout<<"Not odd number";
			 
			 break;
			 default :
			 	cout<<"\n||||>>>>ERROR<<<<||||\n";
}
	return 0;
}
		
