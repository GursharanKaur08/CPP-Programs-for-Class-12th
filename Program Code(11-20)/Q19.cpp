//Enter employee no., name, age, salary and store it in a file.

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int row=5,col=2;

class abc
{	
	private:
	int empno;
	char n[20];
	int age;
	float sal;
	
	public:
	void getdata()
	{	
		char ch;
		cin.get(ch);	      // To empty buffer
		cout<<"\nEnter employee no ";
		cin>>empno;
		cout<<"\nEnter name ";
		cin>>n;
		cout<<"\nEnter age ";
		cin>>age;
		cout<<"\nEnter salary ";
		cin>>sal;
	}

	void putdata()
    {	
			gotoxy(col,row);
		cout<<"\n"<<empno;
	     	gotoxy(col+10,row);
		cout<<"\t"<<n;
	     	gotoxy(col+25,row);
		cout<<"\t"<<age;
	     	gotoxy(col+35,row);
		cout<<"\t"<<sal;
	     	row++;
	}
};
main()
{	clrscr();
	abc p,p1;
	fstream f1("emp5.txt",ios::in|ios::out|ios::binary);
	int i;
	for(i=0;i<3;i++)
	{	p.getdata();
		f1.write((char *)&p,sizeof(p));
	}
	cout<<"\n\nEMPNO\tNAME\tAGE\tSALARY\n";
	f1.seekg(0);
	f1.clear();
	clrscr();
	for(i=0;i<3;i++)
	{	f1.read((char*)&p1,sizeof(p1));
		p1.putdata();
	}
f1.close();
getch();
}