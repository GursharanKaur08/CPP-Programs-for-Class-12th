//Deleting the information of employee by entering the employee number. 

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class abc
{	private:
	int empno;
	char n[20];
	int age;
	float sal;

    public:
	void getdata()
	{	
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
		cout<<"\n\n"<<empno<<"\t"<<n<<"\t"<<age<<"\t"<<sal;
	}
	int get_empno()
	{		
        return empno;
	}
};
main()
{	
    abc p,p1;
	clrscr();
	ifstream f1("emp5.txt",ios::in|ios::binary);
	ofstream f2("temp",ios::out|ios::binary);
	int i,emp;
	cout<<"\n\nNAME\tAGE\tSALARY";
	f1.clear();
	f1.seekg(0);
	for(i=0;i<4;i++)
	
    while(!f1.eof())
	{	
        f1.read((char*)&p1,sizeof(p1));
		if(f1.eof())
		break; 
		p1.putdata();
    }

    cout<<"\nEnter employee no ";
    cin>>emp;
    f1.clear();
    f1.seekg(0);

    while(!f1.eof())
    {          
        f1.read((char*)&p1,sizeof(p1));
	    if(f1.eof())
	    break;
	    if(emp!=p1.get_empno())
	    f2.write((char*)&p1,sizeof(p1));
    }

    f1.close();
    f2.close();
    remove("emp5.txt");
    rename("temp","emp5.txt");
    f1.open("emp5.txt",ios::in|ios::binary);
    cout<<"\n\nNAME\tAGE\tSALARY";
    f1.seekg(0);

    while(!f1.eof())
    {	f1.read((char*)&p1,sizeof(p1));
    	if(f1.eof())
        break;
	    p1.putdata();
    }
    
    f1.close();
    getch();
}
