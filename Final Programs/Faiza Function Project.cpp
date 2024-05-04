#include<iostream>
#include <math.h>
#include<iomanip>
using namespace std;
void menu()
{
	cout<<"PRESS 1 TO FIND SIMPLE PROGRAMS"<<endl;
	cout<<"PRESS 2 TO FIND WHILE PROGRAMS"<<endl;
	cout<<"PRESS 3 TO FIND THE DO-WHILE PROGRAMS"<<endl;
	cout<<"PRESS 4 TO FIND THE FOR LOOP PROGRAMS"<<endl;
	cout<<"PRESS 5 TO FIND THE NESTED LOOP PROGRAMS"<<endl;
	cout<<"PRESS 6 TO FIND THE ARRAY PROGRAMS"<<endl;
}
void simple()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	cout << "Choose an option:\n";
	cout<<"1. Find sum of two numbers:\n";
	cout<<"2. Find difference of two numbers:\n";
	cout<<"3. Find product of two numbers:\n";
	cout<<"4. Find division of two numbers:\n";
	cout<<"5. Find the area of the circle:\n";
	cout<<"6. Find the area of the rectangle:\n";
	cout<<"7. Find the circumference of the circle:\n";
	cout<<"8. Swap two values by using three variable:\n";
	cout<<"9. Find the reverse of a three digit number:\n";
	cout<<"10.Print the star(*) by using the set w:\n";

}
void whileloop()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
    cout << "Choose an option:\n";
    cout << "11. Print numbers 1 to 10\n";
    cout << "12. Print even numbers 2 to 20\n";
    cout << "13. Print odd numbers 1 to 19\n";
    cout << "14. Count down from 10 to 1\n";
    cout << "15. Count up from 1 to 100 by 10s\n";
    cout << "16. Count down from 100 to 1 by 10s\n";
    cout << "17. Print the first 10 small letters of the alphabet\n";
    cout << "18. Print the first 10 capital letters of the alphabet\n";
    cout << "19. Print the first 10 lowercase letters of the alphabet\n";	
}
void dowhile()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
    cout << "Please choose an option:\n";
    cout << "20. Count from 1 to 10\n";
    cout << "21. Count from 10 to 1\n";
    cout << "22. Print the first 10 even numbers\n";
    cout << "23. Print the first 10 odd numbers\n";
    cout << "24. Calculate the sum of the first 10 natural numbers\n";
    cout << "25. Calculate the factorial of a number\n";
    cout << "26. Print the Fibonacci sequence up to the 10th term\n";
    cout << "27. Check if a number is prime\n";
    cout << "28. Make increment in a number\n";
}
void forloop()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	cout << "Please choose an option:\n";
    cout << "29. Count from 1 to 10\n";
    cout << "30. Count from 10 to 1\n";
    cout << "31. Print the first 10 even numbers\n";
    cout << "32. Print the first 10 odd numbers\n";
    cout << "33. Calculate the sum of the first 10 natural numbers\n";
    cout << "34. Calculate the factorial of a number\n";
    cout << "35. Print the Fibonacci sequence up to the 10th term\n";
    cout << "36. Check if a number is prime\n";
}
void nestedloop()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	cout << "Please choose an option:\n";
    cout << "37. Print a rectangle of asterisks\n";
    cout << "38. Print a right triangle of asterisks\n";
    cout << "39. Print a pyramid of asterisks\n";
    cout << "40. Print a diamond of asterisks\n";
    cout << "41. Calculate the sum of a 2D array\n";
}
void array()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	cout << "Please choose an option:\n";
    cout << "42. Print integer without using loop:\n";
	cout << "43. Print integers by using loop:\n";
	cout << "44. Find the sum of five integers:\n";
	cout << "45. Find the sum and average of numbers:\n";
	cout << "46. Find the maximum number:\n";
	cout << "47. Find the minimum number:\n";
	cout << "48. Find the number in reverse and actual order:\n";
	cout << "49. Find the product of teo numbers:\n";
	cout << "50. Find the even numbers:\n";
	cout << "51. Find number by using sequential sorting:\n";
	cout << "52. Find number by buble sorting\n";
}
void sum()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int a,b,x;
	cout<<"Enter  the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	x=a+b;
	cout<<x<<endl;
}
void difference()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int a,b,x;
	cout<<"Enter  the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	x=a-b;
	cout<<x<<endl;
}
void product()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int a,b,x;
	cout<<"Enter  the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	x=a*b;
	cout<<x<<endl;
}
void division()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	float a,b,x;
	cout<<"Enter  the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	x=a/b;
	cout<<x<<endl;	
}
void circlearea()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int L,A;
	cout<<"Enter the length of circle=";
	cin>>L;
	A=L*L;
	cout<<A;
	cout<<"Area of circle="<<A;
}
void rectanglearea()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int L,W,A;
	cout<<"Enter the length of circle=";
	cin>>L;
	cout<<"Enter the width of circle=";
	cin>>W;
	A=L*L;
	cout<<A;
	cout<<"Area of circle="<<A;
}
void circumference()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int PI=3.1416,C,r;
	cout<<"Enter the radius of circle=";
	cin>>r;
	cout<<"Circumference of circle=";
	C=PI*r*r;
	cout<<C;
}
void swap()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int a,b,temp;
	cout<<"Enter the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	cout<<"The values before swapping=";
	cout<<a<<endl<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"The values after swapping=";
	cout<<a<<endl<<b<<endl;
}
void reverse()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int a,b,n;
	cout<<"Enter a three digit number=";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"The reverse number is:"<<endl;
	cout<<n<<endl<<b<<endl<<a;
}
void star()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	cout<<setw(20)<<"*"<<endl;
	cout<<setw(20)<<"**"<<endl;
	cout<<setw(20)<<"***"<<endl;
	cout<<setw(20)<<"****"<<endl;
	cout<<setw(20)<<"*****"<<endl;
}
void printnumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i = 1;
    while(i <= 10) 
	{
    cout << i << " ";
    i++; 
	}
}
void evennumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i = 2;
    while(i <= 20) 
	{
    cout << i << " ";
    i += 2;
	}
}
void oddnumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i = 1;
    while(i <= 19) 
	{
    cout << i << " ";
    i += 2;
    }
}
void countnumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i = 10;
    while(i >= 1) 
	{
    cout << i << " ";
    i--;
	}
}
void countbyten()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i = 1;
    while(i <= 100) 
	{
    cout << i << " ";
    i += 10; 
	} 
}
void hundredtoten()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i = 100;
    while(i >= 1) 
	{
    cout << i << " ";
    i -= 10;
	}
}
void printsmallalphabets()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	char letter = 'a';
    int i = 1;
    while(i <= 10) 
	{
    cout << letter << " ";
    letter++;
    i++;
	}
}
void uppercapitalphabets()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	char letter = 'A';
    int i = 1;
    while(i <= 10) 
	{
    cout << letter << " ";
    letter++;
    i++;
	}
}
void lowertenalphabets()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	char letter = 'a';
    int i = 1;
    while(i <= 10) 
	{
    cout << letter << " ";
    letter++;
    i++;
	}
}
void docount()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i = 1;
    do 
	{
    cout << i << " ";
    i++;
    } 
	while (i <= 10);
    cout << endl;
}
void dowhilecount()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int j = 10;
    do
	{
    cout << j << " ";
    j--;
    } 
	while (j >= 1);
    cout << endl;
}
void doeven()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int k = 2;
    do
	{
    cout << k << " ";
    k += 2;
    }
	while (k <= 20);
    cout << endl;
}
void doodd()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int l = 1;
    do 
	{
    cout << l << " ";
    l += 2;
    } 
	while (l <= 19);
    cout << endl;
}
void dosum()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int sum = 0, m = 1;
    do 
	{
    sum += m;
    m++;
    } 
	while (m <= 10);
    cout << "The sum of the first 10 natural numbers is " << sum << endl;
}
void dofactorial()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int num, fact = 1, n = 1;
    cout << "Enter a number: ";
    cin >> num;
    do 
	{
    fact *= n;
    n++;
    }
	while (n <= num);
    cout << "The factorial of " << num << " is " << fact << endl;
}
void dofibonic()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int a = 0, b = 1, c, term = 1;
    cout << "Fibonacci sequence: ";
    do 
	{
    cout << a << " ";
    c = a + b;
    a = b;
    b = c;
    term++;
    }
	 while (term <= 10);
    cout << endl;
}
void doprime()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int num2, count = 0;
    cout << "Enter a number: ";
    cin >> num2;
    for (int i = 2; i <= num2 / 2; i++) 
	{
    if (num2 % i == 0)
	 {
    count++;
    break;
     }
    }
    if (count == 0 && num2 != 1)
    cout << num2 << " is a prime number.\n";
    else
    cout << num2 << " is not a prime number.\n";
}
void doincrement()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int i,n;
	cout<<"Enter the number=";
	cin>>n;
	i=0;
	do
	{
	cout<<i<<endl;
	i++;
	}
	while(i<=n);
}
void forcount()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	for (int i = 1; i <= 10; i++)
    cout << i << " ";
    cout << endl;
	
}
void forloopcount()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	for (int j = 10; j >= 1; j--)
    cout << j << " ";
    cout << endl;
}
void foreven()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	for (int k = 2; k <= 20; k += 2)
    cout << k << " ";
    cout << endl;
}
void forodd()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	for (int l = 1; l <= 19; l += 2)
    cout << l << " ";
    cout << endl;
}
void forsum()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
    int sum = 0;
    for (int m = 1; m <= 10; m++)
    sum += m;
    cout << "The sum of the first 10 natural numbers is " << sum << endl;	
}
void forfactorial()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int num, fact = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int n = 1; n <= num; n++)
    fact *= n;
    cout << "The factorial of " << num << " is " << fact << endl;
}
void forfibonic()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int a = 0, b = 1, c ;
    for (int term = 1; term <= 10; term++)
	{
    cout << a << " ";
    c = a + b;
    a = b;
    b = c;
    }
    cout << endl;
}
void forprime()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int num2, count = 0;
    cout << "Enter a number: ";
    cin >> num2;
    for (int i = 2; i <= num2 / 2; i++)
	{
    if (num2 % i == 0) 
	 {
    count++;
    break;
     }
    }
    if (count == 0 && num2 != 1)
    cout << num2 << " is a prime number.\n";
    else
    cout << num2 << " is not a prime number.\n";
}
void asterisks()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 10; j++)
    cout << "*";
    cout << endl;
}
}


void triangle()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	for (int i = 1; i <= 5; i++) 
	{
    for (int j = 1; j <= i; j++)
    cout << "*";
	}
    cout << endl;
}
void pyramid()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++)
    cout << " ";
    for (int k = 1; k <= 2 * i - 1; k++)
    cout << "*";
    cout << endl;
}
}
void diamond()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++)
    cout << " ";
    for (int k = 1; k <= 2 * i - 1; k++)
    cout << "*";
    cout << endl;
    }

    for (int i = 4; i >= 1; i--) 
	{
    for (int j = 1; j <= 5 - i; j++)
    cout << " ";
    for (int k = 1; k <= 2 * i - 1; k++)
    cout << "*";
    cout << endl;
    }
}
void nestedsum()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int sum = 0;
    for (int i = 0; i < 3; i++) 
	{
    for (int j = 0; j < 3; j++)
    sum += arr[i][j];
    }
    cout << "The sum of the 2D array is " << sum << endl;
}
void integerdisplay()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int arr[5];
	cout<<"Enter the five integers:"<<endl;
	cin>>arr[0];
	cin>>arr[1];
	cin>>arr[2];
	cin>>arr[3];
	cin>>arr[4];
	cout<<"The values in array:"<<endl;
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;
	cout<<arr[3]<<endl;
	cout<<arr[4]<<endl;
}
void integerdisplayloop()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter an integer=";
		cin>>arr[i];
	}
	cout<<"The values in array are:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void sumfivenumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int a[5],sum,i;
	cout<<"Enter the five values:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"The sum of five numbers=";
	cout<<sum;
}
void sumavg()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int arr[5],i,sum=0;
	float avg;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value=";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	avg=sum/5;
	cout<<"Sum of these five digits="<<sum<<endl;
	cout<<"Average of these five digits="<<avg<<endl;
}
void maxnumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int arr[10],max,i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the number=";
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0;i<10;i++)
	if(max<arr[i])
	max=arr[i];
	cout<<"Maximum number="<<max;
}
void minnumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int arr[10],i,min;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the value=";
		cin>>arr[i];
	}
	min=arr[0];
	for(i=0;i<10;i++)
	if(min>arr[i])
	min=arr[i];
	cout<<"Minimum number="<<min;
}
void reversenumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;	
	int num[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the number=";
		cin>>num[i];
	}
	cout<<"\nThe five numbers in actual order=";
	for(i=0;i<5;i++)
	cout<<num[i]<<" ";
	cout<<"\nThe five numbers in reverse order=";
	for(i=4;i>=0;i--)
	cout<<num[i]<<" ";
}
void producttwonumber()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int num[2],i,pro;
	for(i=0;i<2;i++)
	{
		cout<<"Enter a number=";
		cin>>num[i];
		pro=pro*num[i];
	}
	cout<<"Product of these two numbers="<<pro;
}
void arrayevenodd()
{
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||////////////////////"<<endl;
	int i,n;
	int num[n];
	cout<<"Enter the size of array=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the number=";
		cin>>num[i];
	}
	cout<<"The Even Numbers=";
	for(i=0;i<n;i++)
	{
		if(num[i]%2==0)
		{
			cout<<num[i]<<" ";
		}
	}
	cout<<"\nThe Odd Numbers=";
	for(i=0;i<n;i++)
	{
		if(num[i]%2==1)
		{
			cout<<num[i]<<" ";
		}
	}
}
void sequential()
{
	int arr[10]={10,30,40,50,90,47,88,77,99,100};
	int i,n,loc=-1;
	cout<<"Enter the value to find number=";
	cin>>n;
	for(i=0;i<10;i++)
	if(arr[i]==n)
	loc=i;
	if(loc==-1)
	cout<<"Value not found in the array";
	else
	cout<<"value found in the idex"<<loc;
}
void buble()
{
	int i,j,temp,arr[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter the value=";
		cin>>arr[i];
	}
	cout<<"The original values in array are:"<<endl;
	for(i=0;i<5;i++)
	cout<<arr[i]<<" ";
	for(i=0;i<5;i++)
	for(j=0;j<4;j++)
	if(arr[j]>arr[j+i])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	cout<<"\nThe sorted array:"<<endl;
	for(i=0;i<5;i++)
	cout<<arr[i]<<" ";
}
int main()
{

int op;
menu();
cin>>op;
switch(op)
{
	case 1:
		int oop;
		simple();
		cin>>oop;
		switch(oop)
		{
			case 1:
				sum();
				break;
				case 2:
					difference();
					break;
					case 3:
						product();
						break;
						case 4:
							division();
							break;
							case 5:
								circlearea();
								break;
								case 6:
									rectanglearea();
									break;
									case 7:
										circumference();
										break;
									    case 8:
									    	swap();
									    	break;
									    	case 9:
									    		reverse();
									    		break;
									    		case 10:
									    			star();
									    			break;
		}
		break;
	case 2:
	    whileloop();
	    cin>>oop;
	    switch(oop)
	{
		case 11:
			printnumber();
			break;
			case 12:
				evennumber();
			    break;
			    case 13:
			    	oddnumber();
			    	break;
				    case 14:
				    	countnumber();
				    	break;
						case 15:
							countbyten();
						    break;
						    case 16:
						    	hundredtoten();
							    break;
							    case 17:
							    	printsmallalphabets();
								    break;
								    case 18:
								    	uppercapitalphabets();
									    break;
									    case 19:
									    	lowertenalphabets();
										    break;
	}
	break;
	case 3:

		dowhile();
		cin>>oop;
		switch(oop)
		{
			case 20:
				docount();
				break;
				case 21:
					dowhilecount();
					break;
					case 22:
						doeven();
						break;
						case 23:
							doodd();
							break;
							case 24:
								dosum();
								break;
								case 25:
									dofactorial();
									break;
									case 26:
										dofibonic();
										break;
										case 27:
											doprime();
											break;
											case 28:
												doincrement();
												break;
		}
		break;
		case 4:
			forloop();
			cin>>oop;
			switch(oop)
			{
				case 29:
					forcount();
					break;
					case 30:
						forloopcount();
						break;
						case 31:
							foreven();
							break;
							case 32:
								forodd();
								break;
								case 33:
									forsum();
									break;
									case 34:
										forfactorial();
										break;
										case 35:
											forfibonic();
											break;
											case 36:
												forprime();
												break;
			}
			break;
		case 5:
	    nestedloop();
	    cin>>oop;
	    switch(oop)
	    {
	    	case 37:
	    		asterisks();
	    		break;
	    		case 38:
	    			triangle();
	    			break;
	    			case 39:
	    				pyramid();
	    				break;
	    				case 40:
	    					diamond();
	    					break;
	    					case 41:
	    						nestedsum();
	    						break;	
		}
		break;
		case 6:
	    array();
	    cin>>oop;
	    switch(oop)
	    {
	    	case 42:
			integerdisplay();
			break;
			case 43:
				integerdisplayloop();
				break;
				case 44:
					sumfivenumber();
					break;
					case 45:
						sumavg();
						break;
						case 46:
							maxnumber();
							break;
							case 47:
								minnumber();
								break;
								case 48:
									reversenumber();
									break;
									case 49:
										producttwonumber();
										break;
										case 50:
											arrayevenodd();
											break;
											case 51:
												sequential();
												break;
												case 52:
													buble();
													break;
		}
		break;
}
}

