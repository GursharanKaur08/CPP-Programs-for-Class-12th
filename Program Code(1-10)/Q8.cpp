//Enter any number from 2 digit to 5 digit and the output will be the sum of all the distinguish digits of the numbers.

#include<iostream.h>
#include<conio.h>
main()
{	
	int a=0,b=0,c;
	clrscr();
	cout<<"\nEnter value for A ";
	cin>>a;
	while(a>0)	//	for(;a>0;)  or for(i=a;i>0;i=i/10)
	{	
		c=a%10;
		b=b+c;
		a=a/10;
    }	
	cout<<"\nSum of digits "<<b;
	getch();
}
