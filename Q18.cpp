//Program will read the words which starts from vowels stored in a file.

#include<iostream.h>
#include<fstream.h>
#include<conio.h>
main()
{	
	char ch[80];
	int cnt=0;
	clrscr();
	ifstream f1("emp");
	ofstream f2("temp");
	
	while(!f1.eof())
	{		
		f1>>ch;
		cout<<ch<<"\n";
		if(ch[0]=='a' || ch[0]=='e' || ch[0]=='o' || ch[0]=='i' || ch[0]=='u')
		f2<<"\n"<<ch;
	}
	
f1.close();
f2.close();
cout<<"\n\nName start with vowels \n\n";
f1.open("temp",ios::in);
	
	while(f1)		//while(!f1.eof())
	{	f1>>ch;
		cout<<"\n"<<ch;
		
		if(f1.eof())
		break;
	}
	
f1.close();
getch();
}
