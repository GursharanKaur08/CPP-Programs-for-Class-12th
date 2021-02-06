//Using loop concept the program will give the output of numbers making a right triangle.

#include<iostream.h>
#include<conio.h>
main()
{	
	int i,j;
	clrscr();
	for(i=1;i<=4;i++)
	{	
		cout<<"\n\n";
		for(j=1;j<=i;j++)
		cout<<" "<<i;
	}
	getch();
}
