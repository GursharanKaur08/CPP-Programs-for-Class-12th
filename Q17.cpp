//Enter any line or character in a file and press * to exit the program.

#include<iostream.h>
#include<fstream.h>
#include<conio.h>

main()
{	
	char ch;
	clrscr();
	ofstream f1("emp");    		//implicit
	f1.open("emp",ios::out);		//explicit
	cout<<"\nEnter char ";
	while(1)		//infinity
	{	
		ch=getche();	// to input a single charactor by keybord.
		if(ch=='*')
		break;
		if(ch==13)
		{	
			cout<<"\n";
		 	f1<<'\n';
		}
		f1<<ch;
	}
f1.close();
getch();
}
