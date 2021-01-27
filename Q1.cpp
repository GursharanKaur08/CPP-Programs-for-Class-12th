//Program for copy constructor.

#include<iostream.h>
#include<conio.h>
#include<string.h>
class data
{          char n[20];
	int age;
	float sal;
public:
           data(){}
           data(char x[],int a,float k)
	{         strcpy(n,x);
		age=a;
		sal=k;
	}
            data(data &p)
	{          strcpy(n,p.n);
		age=p.age;//+20;
		sal=p.sal;//+1000;
	}
           display()
	{         cout<<"\n\nNAME	: "<<n;
		cout<<"\n\nAGE :  "<<age;
		cout<<"\n\nSalary: "<<sal;
             }
};
main()
{          clrscr();
           data d("ajay",44,5000);		//implicit caling
           data d1(d);
           data d2=d;
           data d3;
           d3=d2;
           d.display();
           d1.display();
           d2.display();
           d3.display();
           getch();
}
