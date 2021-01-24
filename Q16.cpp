#include<iostream.h>
#include<conio.h>
 void main()
{ 	int a[10][10],i,j,r,c;
	clrscr();
	cout<<"\nEnter no of rows ";
	cin>>r;
	cout<<"\nEnter no of Col ";
	cin>>c;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{	cout<<"\nEnter no ";
			cin>>a[i][j];
		}
	int sum=0,sum1=0;
	for(i=0;i<r;i++)
	{	cout<<"\n";
		for(j=0;j<c;j++)
		{	cout<<" "<<a[i][j];
		    	If((i==j) && a[i][j]>0)
			cout<<a[i][j];
		       	else
			
			cout<<" ";
			sum=sum+a[i][j];
		       	if(i+j==r-1)// && a[i][j]>0)
				cout<<a[i][j];
			else
				cout<<" ";
			if(i==j)
				sum1=sum1+a[i][j];
		  }
	}
	for(i=0;i<r;i++)
	{	cout<<"\n";
		for(j=0;j<c;j++)
		{	cout<<" "<<a[i][j];
		     	if(i==j) //&& a[i][j]>0)
				cout<<a[i][j];
			else
				cout<<" ";
			sum=sum+a[i][j];
			if((i+j==r-1) && a[i][j]>0)
		   		cout<<a[i][j];
		   	else
		   		cout<<" ";
				sum=sum+a[i][j];
		}
	}
 cout<<"\n\nFirst diagonal sum "<<sum1;
 cout<<"\n\nSecond diagonal sum "<<sum;
getch();
}
