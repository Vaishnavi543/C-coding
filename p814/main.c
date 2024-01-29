//queue implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*f=NULL,*r=NULL;
void display()
{
	struct node *temp;
	temp=f;
	if(temp==NULL)
	{
		printf("queue is empty\n");
		fflush(stdout);
	}
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d\n",temp->data);
			fflush(stdout);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
		fflush(stdout);
	}
}
void enqueue()
{
	struct node *new;
	int d=10;
	new=malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("queue is full\n");
		fflush(stdout);
	}
	else
		{
				printf("enter a data for enqueue:");
				fflush(stdout);
				scanf("%d",&d);
		new->data=d;
		if(f==NULL)
		{
		f=new;
		new->next=NULL;
		r=new;
		}
		else
		{
			while(r->next==NULL)
			{
				r->next=new;
				new->next=NULL;
				r=new;
				break;
			}
		}
	}

}
void dequeue()
{
	struct node *t;
	if(f==NULL)
	{
		printf("queue is empty\n");
		fflush(stdout);
		free(f);
	}
	else
	{
		t=f;
		f=f->next;
		free(t);
	}
}
int main()
{
	struct node *temp;
	printf("data in the stack before enqueue and dequeue operation\n");
	fflush(stdout);
	temp = f;
	display();
	temp=f;
	enqueue();
	temp=f;
	enqueue();
	//	temp=top;
	//	push(key);
	temp=f;
	printf("data in the stack after enqueue operation\n");
	fflush(stdout);
	display();
	temp=f;
	printf("data in the stack after dequeue operation\n");
	fflush(stdout);
	temp=f;
	dequeue();
	temp=f;
	display();
}

