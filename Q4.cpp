//Enter item no. , price and quantity in a class.

#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{	char n[20],n1[20],n2[20];
            int  l1,l2,l3;	
clrscr();
cout<<"\nEnter String1 ";
cin>>n;
cout<<"\nEnter String2 ";
cin>>n1;
cout<<"\nEnter String3 ";
cin>>n2;
l1=strlen(n);
l2=strlen(n1);
l3=strlen(n2);
(l1>l2 && l1>l3) ?cout<<"\nLong: "<<n:(l2>l1  && l2>l3) ? cout<<"\nLong: "<<n1 :cout<<"\nLong: "<<n2;
(l1<l2 && l1<l3)?cout<<"\nshort:"<<n:(l2<l1  && l2<l3)?cout<<"\nshort:"<<n1: cout<<"\nshort:"<<n2;
getch();
}
