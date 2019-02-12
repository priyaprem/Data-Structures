#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct node
{
	int x;
	struct node *next;
}*head,*top;

void push()
{
	int y;
	cin>>y;
	top=(struct node*)malloc(sizeof(struct node));
	top->x=y;
	top->next=head->next;
	head->next=top;		
}
int pop()
{
	if(head->next==NULL)
	{
		cout<<"\n No data found";
		return 1;		
	}	
	else 
	{
		top=head->next;
		cout<<top->x;
		head->next=top->next;
		cout<<"\n Popped data successfully";	
		return 0;
	}
}
int peep()
{
	if(head->next==NULL)
	{
		cout<<"\n No data found";
		return 1;
	}	
	else 
	{
		struct node* p;
		p=head->next;
		while(p!=NULL)
		{
			cout<<"\n"<<p->x;
			p=p->next;	
		}
		cout<<"\n Displayed data successfully";
		return 0;
	}
}
int main()
{
	int c;
	int n;
	int i;
	int op;
	head= (struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	int r;
	do
	{
		cout<<"Enter the option \n1. Push \n2.Pop \n3.Peep";
		cin>>op;
		switch(op)
		{
			case 1: cout<<"\n PUSH";
					cout<<"\n Enter the number of elements";
					cin>>n;
					for(i=0;i<n;i++)
					push();
					cout<<"\n Pushed data successfully";
					break;
			case 2:cout<<"\n POP";
			       int ch;
				   do
				   {
					r=pop();
					if(r==1)
					break;
					else 
					{
						cout<<"\n Press 1 to delete";
						cin>>ch;						
					}
				   }while(ch==1);	  
				   break;
			case 3:cout<<"\n PEEP";
				   int d=peep();				   
				   break;
		}
		cout<<"\n Press 1 to continue";
		cin>>c;		
	}while(c==1);
}
