//stack implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*top=NULL;
int value=-1;
void display()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
	{
		printf("stack is empty\n");
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
void push()
{
	struct node *new;
	int d=10;
	new=malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("stack is overflow\n");
		fflush(stdout);
	}
	else
	{
		printf("enter a data for push:");
		fflush(stdout);
		scanf("%d",&d);
		new->data=d;
		new->next=top;
		top=new;
	}

}
int pop()
{
	struct node *t;
	//	int value=-1;
	if(top==NULL)
	{
		printf("stack is EMPTY\n");
		fflush(stdout);
	}
	{
		if(top->next==NULL)
		{
			value=top->data;
			free(top);
		}
		else
		{
			t=top;
			top=top->next;
			value=t->data;
			free(t);
		}
	}
	return value;
}
int main()
{
	struct node *temp;
	printf("data in the stack before push and pop operation\n");
	fflush(stdout);
	temp = top;
	display();
	temp=top;
	push();
	temp=top;
	push();
	//	temp=top;
	//	push(key);
	temp=top;
	printf("data in the stack after push operation\n");
	fflush(stdout);
	display();
	temp=top;
	pop();
	printf("popped value is %d\n",value);
	fflush(stdout);
	printf("data in the stack after pop operation\n");
	fflush(stdout);
	temp=top;
	display();
}


