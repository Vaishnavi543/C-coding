//stack implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*top=NULL;
void display()
{
	if(top==NULL)
		{
			printf("stack is underflow");
			fflush(stdout);
		}
	else
	{
		while(top->next!=NULL)
		{
			printf("%d\n",top->data);
			fflush(stdout);
			top=top->next;
		}
	}
}
void push(int d)
{
	struct node *new;
	new=malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("stack is overflow");
		fflush(stdout);
	}
	else
	{
		new->data=d;
		new->next=top;
		top=new;
	}
	display();
}
void pop(struct node **h)
{
	struct node *t;
	if((*h)->next==NULL)
	{
		printf("stack is underflow");
		fflush(stdout);
	}
	else
	{
		t=(*h);
	    (*h)=(*h)->next;
		free(t);
	}
	display();
}

int main()
{
	struct node *temp,*temp2;
 		int i,j=5,k,key=7;
//		printf("enter the number of nodes:");
//		fflush(stdout);
//		scanf("%d",&j);
		for(i =0;i<j ; i++)
		{
			temp = malloc(sizeof(struct node));
			if(top == NULL)
			{
				top = temp;
				top -> next = NULL;
			}
			else
			{
				temp2 = top;
				while(temp2->next != NULL)
				{
					temp2 = temp2->next;
				}
				temp2->next = temp;
				temp -> next = NULL;
			}
		}
		temp = top;
		for(i =0; i<j ; i++)
		{
//			printf("enter the data for node %d: ",i+1);
//			fflush(stdout);
//			scanf("%d",&k);
			temp->data = i;
			temp = temp -> next;
		}
		printf("data in the stack before push and pop operation\n");
		fflush(stdout);
		temp = top;
		display();
		printf("data in the stack after push operation\n");
		fflush(stdout);
		temp=top;
		push(key);
//		temp=top;
//		display();
//		printf("data in the stack after pop operation\n");
//		fflush(stdout);
//		temp=top;
//		pop(&top);
}


