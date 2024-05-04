#include<iostream>
#include<math.h>
#include<iomanip>
#define PI 3.147
using namespace std;
int main()
{
	start:
	int OP,L,W,r,a,b,c,d,x,y,n,op,temp,units,odd,salary,count,sum=0,fact=1,Marks,E,I,O,U,e,i,o,u,f,f1=-1,f2=1,next;
	float A,C,X,X1,X2,s,even,Bill,Net;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"00....................................................WELCOME TO UAF.....................................................00"<<endl;
	cout<<"00....................................................MY NAME IS KASHIF JAVED............................................00"<<endl;
	cout<<"00....................................................MY DEPARTMENT IS BSCS..............................................00"<<endl;
	cout<<"00....................................................MY SEMESTER IS SECOND..............................................00"<<endl;
	cout<<"00....................................................MY AG-NO IS 2022-AG-9180...........................................00"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||||||||||||||||||////////////////////////////////////////////////"<<endl;
	cout<<"\\0000000000000    00               0               00     0000000000   000000000000     00000000000000       00        00//"<<endl;
	cout<<"\\00                00             0 0             00          00            00          00                   00        00//"<<endl;
	cout<<"\\00                 00           0   0           00           00            00          00                   00        00//"<<endl;
	cout<<"\\00                  00         0     0         00            00            00          00                   00        00//"<<endl; 
	cout<<"\\0000000000000        00       0       0       00             00            00          00                   000000000000//"<<endl;
	cout<<"\\           00         00     0         0     00              00            00          00                   00        00//"<<endl;
	cout<<"\\           00          00   0           0   00               00            00          00                   00        00//"<<endl;
	cout<<"\\           00           00 0             0 00                00            00          00                   00        00//"<<endl;
	cout<<"\\0000000000000            00               00             0000000000        00          00000000000000       00        00//"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||||||||||||||||||||||||||////////////////////////////////////////////////"<<endl;
	cout<<"\\000000000000   0000000000    000000000000   0000000000000000    0000000000000000      00000000000000    0000000000000000//"<<endl;
	cout<<"\\00        00   00      00    0          0          00           00                    00                       00       //"<<endl;
	cout<<"\\00        00   00      00    0          0          00           00                    00                       00       //"<<endl;
	cout<<"\\00        00   00      00    0          0          00           00                    00                       00       //"<<endl;
	cout<<"\\000000000000   0000000000    0          0          00           000000000000000       00                       00       //"<<endl;
	cout<<"\\00             00 00         0          0   00     00           00                    00                       00       //"<<endl;
	cout<<"\\00             00  00        0          0   00     00           00                    00                       00       //"<<endl;
	cout<<"\\00             00   00       0          0   00     00           00                    00                       00       //"<<endl;
	cout<<"\\00             00    00      000000000000   000000000           00000000000000000     00000000000000           00       //"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|||||||||||||||||||||||||||////////////////////////////////////////////////"<<endl;
	cout<<"\\........................................000000000000000000      000000000000000000......................................//"<<endl;
	cout<<"\\........................................00              00      00                ......................................//"<<endl;
	cout<<"\\........................................00              00      00                ......................................//"<<endl;
	cout<<"\\........................................00              00      00                ......................................//"<<endl;
	cout<<"\\........................................00              00      00000000000000000 ......................................//"<<endl;
	cout<<"\\........................................00              00      00                ......................................//"<<endl;
	cout<<"\\........................................00              00      00                ......................................//"<<endl;
	cout<<"\\........................................00              00      00                ......................................//"<<endl;
	cout<<"\\........................................000000000000000000      00                ......................................//"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|||||||||||||||||||||||||||////////////////////////////////////////////////"<<endl;
	cout<<"\\000000      00                    00                     00000000000000     00         00     000000     000000000000000//"<<endl;              
	cout<<"\\  00      00                    00  00                   00                 00         00       00       00             //"<<endl;
	cout<<"\\  00    00                    00      00                 00                 00         00       00       00             //"<<endl;
	cout<<"\\  00  00                    00          00               00                 00         00       00       00             //"<<endl;
	cout<<"\\  0000                    000000000000000000             00000000000000     0000000000000       00       000000000000000//"<<endl;     
	cout<<"\\  00  00                00                  00                       00     00         00       00       00             //"<<endl;
	cout<<"\\  00    00            00                      00                     00     00         00       00       00             //"<<endl;
	cout<<"\\  00      00        00                          00                   00     00         00       00       00             //"<<endl;
	cout<<"\\000000      00    00                              00     00000000000000     00         00     000000     00             //"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|||||||||||||||||||||||||||////////////////////////////////////////////////"<<endl;
	cout<<"\\00000000000000               00        00                               00    000000000000    00000000000000000000000000//"<<endl;                             
	cout<<"\\      00                   00  00        00                           00      00                 00                   00//"<<endl;
	cout<<"\\      00                 00      00        00                       00        00                 00                   00//"<<endl;
	cout<<"\\      00               00          00        00                   00          00                 00                   00//"<<endl;
	cout<<"\\      00             000000000000000000        00               00            000000000000       00                   00//"<<endl;
	cout<<"\\      00           00                  00        00           00              00                 00                   00//"<<endl; 
	cout<<"\\00    00         00                      00        00       00                00                 00                   00//"<<endl;
	cout<<"\\00    00       00                          00         00  00                  00                 00                   00//"<<endl;
	cout<<"\\00000000     00                              00         00                    000000000000    00000000000000000000000000//"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|||||||||||||||||||||||||||////////////////////////////////////////////////"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"00<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<...................................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>00"<<endl;
	cout<<"00.........................................PRESS 1 TO FIND SIMPLE ALL PROGRAMS...........................................00"<<endl;
	cout<<"00<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<..................................................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>00"<<endl;
	cout<<"00...................................PRESS 2 TO FIND THE IF+IF-ELSE+IF-ELSE-IF PROGRAMS..................................00"<<endl;
	cout<<"00<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.......................................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>00"<<endl;
	cout<<"00.......................................PRESS 3 TO FIND THE WHILE LOOP PROGRAMS.........................................00"<<endl;
	cout<<"00<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.....................................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>00"<<endl;
	cout<<"00........................................PRESS 4 TO FIND THE DO WHILE PROGRAMS..........................................00"<<endl;
	cout<<"00<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.....................................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>00"<<endl;
	cout<<"00........................................PRESS 5 TO FIND FOR-LOOP THE PROGRAMS..........................................00"<<endl;
	cout<<"00<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.....................................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>00"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cin>>OP;
	switch(OP)
	{
		case 1:
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<...................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<".................................................ALL SIMPLE PROGRAMS......................................................."<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<...................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"00.........................................PRESS 1 TO FIND THE AREA OF THE CIRCLE........................................00"<<endl;
	cout<<"00.........................................PRESS 2 TO FIND THE AREA OF THE RECTANGLE.....................................00"<<endl;
	cout<<"00.........................................PRESS 3 TO FIND THE CIRCUMFERENCE OF THE CIRCLE...............................00"<<endl;
	cout<<"00.........................................PRESS 4 TO FIND THE AREA AND PERIMETER OF THE TRIANGLE........................00"<<endl;
	cout<<"00.........................................PRESS 5 TO SOLVE AN EQUATION BY QUADRATIC FORMULA.............................00"<<endl;
	cout<<"00.........................................PRESS 6 TO PRINT COUNTING AND ALPHABETS IN ESCAPE SEQUENCE....................00"<<endl;
	cout<<"00.........................................PRESS 7 TO SWAP VALUES OF TWO VARIABLES.......................................00"<<endl;
	cout<<"00.........................................PRESS 8 TO SWAP VALUES WITHOUT USING THIRD VARIABLE...........................00"<<endl;
	cout<<"00.........................................PRESS 9 TO REVERSE A NUMBER...................................................00"<<endl;
	cout<<"00.........................................PRESS 10 TO PRINT  THE(*) BY SET(W)...........................................00"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"...............................................FIND THE AREA OF THE CIRCLE................................................."<<endl;
			cout<<"Enter the length of the circle=L=";
			cin>>L;
			cout<<"Area of the circle=A=";
			A=L*L;
			cout<<A;
			break;
			case 2:
				cout<<".............................................FIND THE AREA OF THE RECTANGLE................................................"<<endl;
				cout<<"Enter the length of the rectangle=L=";
				cin>>L;
				cout<<"Enter the width of the rectangle=W=";
				cin>>W;
				cout<<"Area of the rectangle=A=";
				A=L*W;
				cout<<A;
				break;
				case 3:
					cout<<"..........................................FIND THE CIRCUMFERENCE OF THE CIRCLE............................................."<<endl;
					cout<<"Enter the radius of the circle=r=";
					cin>>r;
					cout<<"Circumference of the circle=C=";
					C=PI*r*r;
					cout<<C;
					break;
					case 4:
						cout<<".........................................FIND THE AREA AND PERIMETER OF THE TRIANGLE......................................."<<endl;
						cout<<"Enter the value of a=";
						cin>>a;
						cout<<"Enter the value of b=";
						cin>>b;
						cout<<"Enter the value of c=";
						cin>>c;
						s=(a+b+c)/2;
						X=s*(s-a)*(s-b)*(s-c);
						cout<<"The perimeter of the rectagle=s="<<s<<endl;
						cout<<"The area of the triangle=X="<<X;
						break;
						case 5:
							cout<<".........................................SOLVE AN EQUATION BY QUADRATIC FORMULA............................................"<<endl;
							cout<<"Enter the value of a=";
							cin>>a;
							cout<<"Enter the value of b=";
							cin>>b;
							cout<<"Enter the value of c=";
							cin>>c;
							X1=(-b+sqrt(b*b-4*a*c))/(2*a);
							X2=(-b-sqrt(b*b-4*a*c))/(2*a);
							cout<<"The value of X1="<<X1<<endl;
							cout<<"The value of X2="<<X2;
							break;
							case 6:
								cout<<"........................................COUNTING AND ALPHABETS WITH ESCAPE PROGRAM........................................."<<endl;
								cout<<"1\tA\t5\tE\n"<<endl<<endl;
								cout<<"2\tB\t6\tF\n"<<endl<<endl;
								cout<<"3\tC\t7\tG\n"<<endl<<endl;
								cout<<"4\tD\t8\tH\n"<<endl<<endl;
								break;
								case 7:
									cout<<"...................................................SWAP THE VALUES........................................................."<<endl;
									cout<<"Enter the value of x=";
									cin>>x;
									cout<<"Enter the value of y=";
									cin>>y;
									cout<<"The values before swapping"<<endl;
									cout<<x<<endl<<y<<endl;
									temp=x;
									x=y;
									y=temp;
									cout<<"The values after swapping"<<endl;
									cout<<x<<endl<<y<<endl;
 									break;
									case 8:
									cout<<".......................................SWAP THE VALUES WITHOUT USING THIRD VARIABLE........................................"<<endl;
									cout<<"Enter the value of x=";
									cin>>x;
									cout<<"Enter the value of y=";
									cin>>y;
									cout<<"The values before swapping"<<endl;
									cout<<x<<endl<<y<<endl;
									x=x+y;
									y=x-y;
									x=x-y;
									cout<<"The values after swapping"<<endl;
									cout<<x<<endl<<y<<endl;
									break;
									case 9:
										cout<<"......................................................REVERSE A NUMBER....................................................."<<endl;
										cout<<"Enter a five digit number=";
										cin>>n;
										a=n/10000;
										n=n%10000;
										b=n/1000;
										n=n%1000;
										c=n/100;
										n=n%100;
										d=n/10;
										n=n%10;
										cout<<"The reverse numer is:"<<endl;
										cout<<n<<endl<<d<<endl<<c<<endl<<b<<endl<<a;
												break;
												case 10:
													cout<<"....................................................PRINT STARS (*) BY SET (W)............................................."<<endl;
													cout<<setw(20)<<"*"<<endl;
													cout<<setw(20)<<"**"<<endl;
													cout<<setw(20)<<"***"<<endl;
													cout<<setw(20)<<"****"<<endl;
													cout<<setw(20)<<"*****"<<endl;
													break;
													default:
														cout<<"THANK YOU\n";
	}
	 
	break;
	case 2:
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.....................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<".................................................CONDITIONALS PROGRAMS....................................................."<<endl;
	cout<<".................................................IF+IF-ELSE+IF-ELSE-IF....................................................."<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.....................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"00.........................................PRESS 11 TO FIND EVEN AND ODD NUMBERS.........................................00"<<endl;
	cout<<"00.........................................PRESS 12 TO FIND A LEAP YEAR..................................................00"<<endl;
	cout<<"00.........................................PRESS 13 TO FIND THE MAXIMUM NUMBER (METHOD:1)................................00"<<endl;
	cout<<"00.........................................PRESS 14 TO FIND THE MAXIMUM NUMBER (METHOD:2)................................00"<<endl;
	cout<<"00.........................................PRESS 15 TO FIND THE MINIMUM NUMBER (METHOD:1)................................00"<<endl;
	cout<<"00.........................................PRESS 16 TO FIND THE MINIMUM NUMBER (METHOD:2)................................00"<<endl;
	cout<<"00.........................................PRESS 17 TO FIND A PROGRAM THAT HOLDS FIVE PROGRAM............................00"<<endl;
	cout<<"00.........................................PRESS 18 TO FIND THE GRADES OF A RESULT CARD..................................00"<<endl;
	cout<<"00.........................................PRESS 19 TO FIND THE VOWELS (METHOD:1)........................................00"<<endl;
	cout<<"00.........................................PRESS 20 TO FIND THE VOWELS (METHOD:2)........................................00"<<endl;
	cout<<"00.........................................PRESS 21 TO FIND THE NUMBERS ARE EQUAL........................................00"<<endl;
	cout<<"00.........................................PRESS 22 TO CHECK ELECTRICITY BILL............................................00"<<endl;
	cout<<"00.........................................PRESS 23 TO CALCULATE SALARY BONOUS...........................................00"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<".................................................FIND THE EVEN AND ODD NUMBERS............................................."<<endl;
			cout<<"Enter the number=";
			cin>>n;
			if(n%2==0)
			cout<<"This is a even number";
			else
			cout<<"This is a odd number";
			break;
			case 12:
				cout<<"....................................................FIND THE LEAP YEAR....................................................."<<endl;
			    cout<<"Enter any year:"<<endl;
				cin>>n;
				if(n%4==0)	
				cout<<"This is a leap year";
				else
				cout<<"This is not a leap year";
				break;
				case 13:
					cout<<"............................................FIND THE MAXIMUM NUMBER (METHOD:1).............................................."<<endl;
					cout<<"Enter the value of a=";
					cin>>a;
					cout<<"Enter the value of b=";
					cin>>b;
					cout<<"Enter the value of c=";
					cin>>c;
					if(a>b && a>c)											
					cout<<"The maximum number is a";
					if(b>a && b>c)
					cout<<"The maximum number is b";
					if(c>a && c>b)
					cout<<"The maximum number is c";
					else
					cout<<"Sorry,there is a syntax error";
					break;
					case 14:
						cout<<"..............................................FIND THE MAXIMUM NUMBER (METHOD:2)..........................................."<<endl;
						cout<<"Enter the value of a=";
						cin>>a;
						cout<<"Enter the value of b=";
						cin>>b;
						cout<<"Enter the value of c=";
						cin>>c;
						if(a>b && a>c)
						cout<<"The maximum number is a";
						else if(b>a && b>c)
						cout<<"The maximum number is b";
						else if(c>a && c>b)
						cout<<"The maximum number is c";
						else
						cout<<"Sorry,there is a syntax error";
						break;
						case 15:
						    cout<<"................................................FIND THE MINIMUM NUMBER (METHOD:1)........................................."<<endl;
						    cout<<"Enter the value of a=";
							cin>>a;
							cout<<"Enter the value of b=";
							cin>>b;
							cout<<"Enter the value of c=";
							cin>>c;
							if(a<b && a<c)
							cout<<"The minimum number is a";
							if(b<a && b<c)
							cout<<"The minmum number is b";
							if(c<a && c<b)
							cout<<"The minimum number is c";
							else
							cout<<"Sorry,there is a syntax error";
							break;
							case 16:
			       		        cout<<"............................................FIND THE MINIMUM NUMBER (METHOD:2)............................................."<<endl;
								cout<<"Enter the alue of a=";
								cin>>a;
		     					cout<<"Enter the value of b=";
								cin>>b;
								cout<<"Enter the value of c=";
								cin>>c;
								if(a<b&a<c)
					    		cout<<"The minimum number is a";
								else if(b<a&b<c)
								cout<<"The minimum number is b";
								else if(c<a&c<b)
								cout<<"The minimum number is c";
								else
								cout<<"Sorry, there is a syntax error";
								break;
								case 17:
									cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<............................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
									cout<<"................................................COMBINATION OF FIVE PROGRAMS..............................................."<<endl;
							        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<............................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
                            	    cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
                                    cout<<"00.........................................Press 1 To Find The Area Of Rectangle.........................................00"<<endl;
                                    cout<<"00.........................................Press 2 To Find The Area Of Circle............................................00"<<endl;
                                    cout<<"00.........................................Press 3 To Find The Circumference Of The Circle...............................00"<<endl;
                                    cout<<"00.........................................Press 4 To Find The Area And Perimeter Of The Rectangle.......................00"<<endl;
                                    cout<<"00.........................................Press 5 TO Find THE Value Of X By Using Quadratic Formula.....................00"<<endl;
                                    cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
									cin>>OP;
									if(OP==1)
									{													
	                                    cout<<".................................................Find THE AREA OF RECTANGLE................................................"<<endl;
	                                    cout<<"ENTER the length of rectangle=L=";
	                                    cin>>L;
	                                    cout<<"Enter the width of rectangle=W=";
	                                    cin>>W;
	                                    cout<<"Area of rectangle=A=";
	                                    A=L*W;
	                                    cout<<A;
                                    }
                                    else if(OP==2)
                                    {	
		                               cout<<".................................................FIND THE AREA OF CIRCLE..................................................."<<endl;
		                               cout<<"Enter the radius of the circle=r=";
	                                   cin>>r;
	                                   cout<<"Area of the circle=A=";
		                               A=PI*r*r;
	                                   cout<<A;
		                            }
		                            else if(OP==3)
		                            {
			                            cout<<".................................................FIND THE CIRCUMFERENCE OF THE CIRCLE......................................"<<endl;
		                                cout<<"Enter the radius of the circlre=r=";
		                                cin>>r;
		                                cout<<"Circumference of the circle=C=";
		                                C=2*PI*r;
		                                cout<<C;		
		                            }
		                            else if(OP==4)
		                            {
		                                cout<<"............................................FIND THE AREA AND PERIMETER OF THE RECTANGLE..................................."<<endl;
	                                    cout<<"Enter the value of a=";
                                        cin>>a;
                                        cout<<"Enter the value of b=";
                                        cin>>b;
                                        cout<<"Enter the value of C=";
	                                    cin>>c;
                                        s=(a+b+c)/2;
                                        X=s*(s-a)*(s-b)*(s-c);
                                        cout<<"The perimeter of the triangle=s="<<s<<endl;
                                        cout<<"The area of the rectangle=X="<<X;			
		                            }
		                            else if(OP==5)
	                                {
			                            cout<<".........................................SOLVE AN EQUATION BY QUADRATIC FORMULA............................................"<<endl;
			                            cout<<"Enter the value of a=";
						                cin>>a;
					                    cout<<"Enter the value of b=";
			                            cin>>b;
		                                cout<<"Enter the value of c=";
	                                    cin>>c;
		                                X1=(-b+sqrt(b*b-4*a*c))/(2*a);
			                  			X2=(-b-sqrt(b*b-4*a*c))/(2*a);
						                cout<<"The value of X1="<<X1<<endl;
						                cout<<"The value of X2="<<X2;	
	                                }
		                            else
		                            {
			                        cout<<"\t\tSyntax Error";
	                                }
	                                break;
	                                case 18:
	                                    cout<<"..........................................FIND THE GRADE OF A STUDENT MARKS........................................."<<endl;
	                                    cout<<"Enter the marks of the student=";
	                                    cin>>Marks;
	                                    if(Marks>=95)
	                                    cout<<"A+";
	                                    else if(Marks>=85)
	                                    cout<<"A";
	                                    else if(Marks>=75)
	                                    cout<<"B";
	                                    else if(Marks>=65)
	                                    cout<<"C";
	                                    else if(Marks>=55)
	                                    cout<<"D";
	                                    else if(Marks>=45)
	                                    cout<<"E";
	                                    else if(Marks>=35)
	                                    cout<<"F";
	                                    else
	                                    cout<<"Sweet Heart Go Home And Take Rest";
	                                    break;
	                                    case 19:
	                                        cout<<"................................................FIND THE VOWELS (METHOD:1)................................................."<<endl;
	                                        cout<<"Enter any character=";
	                                        char ch;
	                                        cin>>ch;
	                                        if(ch=='a'||ch=='A')
	                                        cout<<" THIS IS A VOWEL";
	                                        else if(ch=='e'||ch=='E')
	                                        cout<<"THIS IS A VOWEL";
	                                        else if(ch=='i'||ch=='I')
	                                        cout<<"THIS IS A VOWEL";
	                                        else if(ch=='o'||ch=='O')
	                                        cout<<"THIS IS A VOWEL";
	                                        else if(ch=='u'||ch=='U')
	                                        cout<<"THIS IS A VOWEL";
	                                        else
	                                        cout<<"THIS IS NOT A VOWEL";
	                                        break;
	                                        case 20:
	                                        	cout<<"...............................................FIND THE VOWELS (METHOD:2).................................................."<<endl;
	                                        	cout<<"Enter any character=";
	                                        	cin>>ch;
	                                        	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	                                        	cout<<"This is a vowel";
	                                        	else
	                                        	cout<<"This is not a vowel";
	                                        	break;
	                                        	case 21:
	                                        		cout<<"............................................FIND THE NUMBERS ARE EQUAL....................................................."<<endl;
	                                        		cout<<"Enter the three numbers:"<<endl;
	                                        		cin>>a>>b>>c;
	                                        		if(a==b)
	                                        		if(a==c)
	                                        		cout<<"All the three numbers are equal";
	                                        		else 
	                                        		cout<<"All the three numbers are not equal";
	                                        		else
	                                        		cout<<"All the three numbers are not equal";
	                                        		break;
	                                        		case 22:
	                                        			cout<<"...............................................FIND THE ELECTRICITY BILL..................................................."<<endl;
	                                        			cout<<"Enter the units consumed=";
	                                        			cin>>units;
	                                        			if(units>300)
	                                        			Bill=units*5;
	                                        			else if(units>500)
	                                        			Bill=units*7;
	                                        			else
	                                        			Bill=units*2;
	                                        			Bill=Bill+150;
	                                        			if(Bill>2000)
	                                        			Bill=Bill+(Bill*0.5/100.0);
	                                        			cout<<"Total Bill="<<Bill;
	                                        			break;
	                                        			case 23:
	                                        				cout<<"...................................................FIND THE SALARY BONOUS.................................................."<<endl;
	                                        				cout<<"Enter the salary=";
	                                        				cin>>salary;
	                                        				if(salary>=20000)
	                                        				Net=salary-(salary*7/100);
	                                        				else if(salary>=10000)
	                                        				Net=salary-1000;
	                                        				else
	                                        				Net=salary;
	                                        				cout<<"Your net salary="<<Net;
	                                        				break;
														}
	break;
	case 3:
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<...................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"...................................................WHILE LOOP PROGRAMS....................................................."<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<...................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"00.........................................PRESS 24 TO FIND THE EVEN NUMBERS.............................................00"<<endl;
	cout<<"00.........................................PRESS 25 TO FIND THE ODD NUMBERS..............................................00"<<endl;
	cout<<"00.........................................PRESS 26 TO FIND THE FIBONIC SERIES...........................................00"<<endl;
	cout<<"00.........................................PRESS 27 TO PRINT NATURAL NUMBERS IN DESCENDING ORER..........................00"<<endl;
	cout<<"00.........................................PRESS 28 TO PRINT OUT TABLE...................................................00"<<endl;
	cout<<"00.........................................PRESS 29 TO MAKE THE INCREMENT................................................00"<<endl;
	cout<<"00.........................................PRESS 30 TO MAKE DECREMENT....................................................00"<<endl;
	cout<<"00.........................................PRESS 31 TO MAKE SUM OF NATURAL NUMBERS.......................................00"<<endl;
	cout<<"00.........................................PRESS 32 TO PRINT YOUR NAME 10 TIMES..........................................00"<<endl;
	cout<<"00.........................................PRESS 33 TO FIND THE FACTORIAL................................................00"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cin>>op;
	switch(op)
	{
		case 24:
			cout<<"...................................................FIND THE EVEN NUMBERS..................................................."<<endl;
			cout<<"\nEnter the ending value:";
			cin>>n;
			cout<<"\nEven numbers:";
			while(i<=n)
			{
				if(i%2==0)
				{
					cout<<"\n"<<i;
					even++;
				}
				i++;
			}
			cout<<"\nTotal even numbers:"<<even;
			break;
			case 25:
				cout<<"....................................................FIND THE ODD NUMBERS..................................................."<<endl;
				cout<<"\nEnter the ending value:";
			    cin>>n;
		    	cout<<"\nOdd numbers:";
		    	i=1;
			    while(i<=n)
			    {
				    if(i%2==1)
				    {
					    cout<<"\n"<<i;
					    odd++;
				    }
				    i++;
			    }
			cout<<"\nTotal odd numbers:"<<odd;
			break;
			case 26:
				cout<<"................................................MAKR A FIBONAIC SERIES...................................................."<<endl;
				cout<<"Enter the number of terms:";
				cin>>n;
				cout<<"The Fibonacci Series:";
				while(n>0)
				{
					f=f1+f2;
					f1=f2;
					f2=f;
					cout<<"\n"<<f;
					n--;
				}
				break;
				case 27:
					cout<<"...........................................NATURAL NUMBERS IN DESCENDING ORDER............................................."<<endl;
					cout<<"\nEnter the maximum value to print natural numbers:";
					cin>>n;
					i=n;
					cout<<"\nList of natural numbers:";
					while(i>=1)
					{
						cout<<"\n"<<i;
						i--;
					}
					break;
					case 28:
						cout<<"....................................................PRINT OUT A TABLE............................................................"<<endl;
						cout<<"Enter the number:";
						cin>>n;
						i=1;
						while(i<=10)
						{
							cout<<n<<"*"<<i<<"="<<n*i<<endl;
							i++;
						}
						break;
						case 29:
							cout<<"..................................................MAKE THE INCREMENT......................................................."<<endl;
							cout<<"Enter the number:";
							cin>>n;
							while(n<=5)
							{
								cout<<i;
								sum=sum+i;
								i++;
							}
							break;
							case 30:
								cout<<"...................................................MAKE THE DECREMENT......................................................"<<endl;
								cout<<"Enter the number=";
								cin>>n;
								while(n>=0)
								{
									cout<<n<<endl;
									n--;
								}
								break;
								case 31:
									cout<<"...............................................MAKE THE SUM OF SERIES......................................................"<<endl;
									cout<<"Enter the number=";
									cin>>n;
									while(n>0)
									{
										sum=sum+n;
										n--;
									}
									cout<<"The sum of natural numbers="<<sum;
									break;
									case 32:
										cout<<"..................................................PRINT OUT YOUR NAME......................................................"<<endl;
										while(i<=10)
										{
											cout<<"KASHIF JAVED"<<endl;
											i++;
										}
										cout<<"Thank You"<<endl;
										break;
										case 33:
											cout<<".................................................FIND THE FACTORIAL........................................................"<<endl;
											cout<<"\nEnter the number:";
											cin>>n;
											i=1;
											while(i<=n)
											{
												fact=fact*i;
												i++;
											}
											cout<<"fact"<<n<<"="<<fact;
											break;							
	}
	break;
	case 4:
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"...................................................DO-WHIE PROGRAMS........................................................"<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"00.........................................PRESS 34 TO FIND THE EVEN NUMBERS.............................................00"<<endl;
	cout<<"00.........................................PRESS 35 TO FIND THE ODD NUMBERS..............................................00"<<endl;
	cout<<"00.........................................PRESS 36 TO FIND THE FIBONIC SERIES...........................................00"<<endl;
	cout<<"00.........................................PRESS 37 TO PRINT NATURAL NUMBERS IN DESCENDING ORDER.........................00"<<endl;
	cout<<"00.........................................PRESS 38 TO PRINT OUT TABLE...................................................00"<<endl;
	cout<<"00.........................................PRESS 39 TO MAKE INCREMENT....................................................00"<<endl;
	cout<<"00.........................................PRESS 40 TO MAKE DECREMENT....................................................00"<<endl;
	cout<<"00.........................................PRESS 41 TO MAKE SUM OF SERIES................................................00"<<endl;
	cout<<"00.........................................PRESS 42 TO PRINT YOUR NAME 10 TIMES..........................................00"<<endl;
	cout<<"00.........................................PRESS 43 TO FIND THE FACTORIAL................................................00"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cin>>op;
	switch(op)
	{
			case 34:
		cout<<".................................................FIND THE EVEN NUMBERS....................................................."<<endl;
		cout<<"Enter the Starting Even Number=";
		cin>>n;
		cout<<"Enter the Last Even Number=";
		cin>>x;
		n==n;
		count=0;
		if(n%2==0 && x%2==0)
		{
			do
			{
				cout<<n<<" ";
				n+=2;
				count++;
			}
			while(n<=x);
			cout<<"The total numbers:"<<count;
		}
		else
		{
			cout<<"Not even numbers";
		}
		break;
		case 35:
			cout<<"...................................................FIND THE ODD NUMBERS................................................."<<endl;
			cout<<"Enter the Starting Odd Number=";
			cin>>n;
			cout<<"Enter the Last Odd Number=";
			cin>>x;
			n==n;
			count=0;
			if(n%2!=0 && x%2!=0)
			{
				do
				{
				cout<<n<<" ";
				n+=2;
				count++;
			    }
			    while(n<=x);
			    cout<<"The Total Odd Numbers=";
			}
			else
			{
				cout<<"Not Odd Numbers=";
			}
			break;
			case 36:
				cout<<".................................................FIND THE FIBONIC SERIES.............................................................<<endl;
	
				break;
				case 37:
					cout<<"........................................FIND NATURAL NUMBERS IN DESCENDING ORDER.................................................."<<endl;
	}

	break;
	case 5:
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"....................................................FOR-LOOP PROGRAMS......................................................"<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<.................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	cout<<"00.........................................PRESS 44 TO FIND THE EVEN NUMBERS.............................................00"<<endl;
	cout<<"00.........................................PRESS 45 TO FIND THE ODD NUMBERS..............................................00"<<endl;
	cout<<"00.........................................PRESS 46 TO FIND THE PRIME NUMBERS............................................00"<<endl;
	cout<<"00.........................................PRESS 47 TO FIND THE FIBONIC SERIES...........................................00"<<endl;
	cout<<"00.........................................PRESS 48 TO PRINT NATURAL NUMBERS IN DESCENDING ORDER.........................00"<<endl;
	cout<<"00.........................................PRESS 49 TO PRINT OUT TABLE...................................................00"<<endl;
	cout<<"00.........................................PRESS 50 TO MAKE INCREMENT AND DECREMENT......................................00"<<endl;
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"<<endl;
	case 44:
		cout<<"...............................................FIND EVEN NUMBERS......................................................"<<endl;
		cout<<""
	break;
	}
	return 0;
	
}
