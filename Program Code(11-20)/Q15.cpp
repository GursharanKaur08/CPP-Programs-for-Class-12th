//Selection sort

#include<iostream.h>
#include<conio.h>
void main()
{	
    int a[20],n,i,j,t,min,p;
	clrscr();
	cout<<"\nEnter no of elements in A ";
	cin>>n;
	
    for(i=0;i<n;i++)
	{	cout<<"\nEnter no ";
		cin>>a[i];
	}
	cout<<"\n\n";
	
    for(i=0;i<n;i++)
		cout<<" "<<a[i];
	
    for(i=0;i<n;i++)
	{	min=a[i];
		p=i;
		for(j=i;j<n;j++)
		{	if(a[j]<min)
			{	min=a[j];
				p=j;
			}
		}
	
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
	cout<<"\n\n";
	
    for(i=0;i<n;i++)
		cout<<" "<<a[i];

    getch();
}
