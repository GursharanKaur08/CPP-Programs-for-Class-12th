//Program to store numbers in an array and allow user to enter any number which he/she wants to find in array.(Binary Search)

#include<iostream.h>
#include<conio.h>
main()
{	int a[20],n,i,no,low=0,high,mid,f=0;
	clrscr();
	cout<<"\nEnter no of elements ";
	cin>>n;
	for(i=0;i<n;i++)
	{	cout<<"\nEnter no ";
		cin>>a[i];
	}
	cout<<"\n\n";
	for(i=0;i<n;i++)
		cout<<"  "<<a[i];
cout<<"\nEnter no to be search ";
cin>>no;
high=n-1;
while(low<=high && f==0)
	{	mid=(low+high)/2;
		if (a[mid]==no)
		{	cout<<"\n\n"<<no<<" store at "<<mid+1;
		
		f=1;
		break;
		}
		else  if(no>a[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	if(f==0)
	cout<<"\n\n"<<no<<" does not exist";
getch();
}
