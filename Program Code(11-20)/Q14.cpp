//Insertion sort.

#include<iostream.h>
#include<conio.h>
void main()
{	
    int a[20],n,i,j,t;
	clrscr();
	cout<<"\nEnter no of elements in A ";
	cin>>n;
	
    for(i=0;i<n;i++)
	{	
		cout<<"\nEnter no ";
		cin>>a[i];
	}
	cout<<"\n\n";
	
    for(i=0;i<n;i++)
		cout<<" "<<a[i];
	
    for(i=0;i<n;i++)
	{	
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			 {	
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			 }
		}	 
	}
    
    cout<<"\n\n";
	    for(i=0;i<n;i++)
		cout<<" "<<a[i];
    getch();
}
