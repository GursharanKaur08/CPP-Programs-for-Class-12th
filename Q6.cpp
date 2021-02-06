//Enter any number and the output will be all the prime numbers up to that number.

#include<iostream.h>
#include<conio.h>
main()
{	
	int n,i,j,p;
	clrscr();
	cout<<"\nEnter no of N ";
	cin>>n;
	for(i=1;i<=n;i++)
	{	
		p=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
		 	p=1;
		}
		if(p==0)
		cout<<"  "<<i;
	}
	getch();
}
