//Program for Stacks and Queue.

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

struct queue
{	
	int x;
	queue *next;
}*front=NULL,*rear;

void insert(int);
void delnode();
void display();

void main()
{	
	int a,ch;
	clrscr();
	do
	{	
		cout<<"\nEnter 1 for Insert";
		cout<<"\nEnter 2 for Delete";
		cout<<"\nEnter 3 for display";
		cout<<"\nEnter 4 for exit";
		cout<<"\n\nEnter your choice ";
		cin>>ch;
		switch(ch)
		{	
			case 1:	cout<<"\nEnter no for insert ";
			cin>>a;
			
			insert(a);
			break;
			case 2:	delnode();
				break;
			case 3:	display();
				break;
			case 4:	exit(0);
		}
	}
	while(1);
	getch();
}
void insert(int no)	        //char str[]
{	queue *ptr;
	ptr=new queue;       
            ptr=(struct queue*)malloc(sizeof(struct queue));
	ptr->x=no;
	ptr->next=NULL;
	if(front==NULL)
	{	front=ptr;
		rear=ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
}
void delnode()
{	int p;
	queue *ptr;
	if(front==NULL)
	{	cout<<"\n\nQueue is Empty";
		return;
	}
	p=front->x;        
          	ptr=front;
	front=front->next;
	delete ptr;
	cout<<"\ndeleted element "<<p<<"\n";
}
void display()
{	queue *ptr;
	cout<<"\nQueue now:- \n";
	for(ptr=front;ptr!=NULL;ptr=ptr->next)
	cout<<" "<<ptr->x;
}
getch ();
}
