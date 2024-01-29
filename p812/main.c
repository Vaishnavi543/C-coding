//Program to reverse a Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};
void reverse(struct node **h,struct node *p)
{
	int length=1;
	struct node *q=p;
	int t1,t2,i,j;
	while(p->next!=(*h))
	{
		length++;
		p=p->next;
	}
	p=(*h);
	{
		for(i=0;i<(length/2);i++)
		{
			t1=p->data;
			q=(*h);
			for(j=length;j>i+1;j--)
			{
				q=q->next;
				t2=q->data;
			}
			q->data=t1;
			p->data=t2;
			p=p->next;
		}
	}
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j=7,k;
	printf("enter the number of nodes:");
	fflush(stdout);
	scanf("%d",&j);
	for(i =0;i<j;i++)
	{
		temp = malloc(sizeof(struct node));
		if(head == NULL)
		{
			head = temp;
			head -> next = head;
		}
		else
		{
			temp2 = head;
			while(temp2->next != head)
			{
				temp2 = temp2->next;
			}
			temp2->next = temp;
			temp -> next = head;
		}
	}
	temp = head;
	for(i =1; i<=j ; i++)
	{
		printf("enter the data for node %d: ",i);
		fflush(stdout);
		scanf("%d",&k);
		temp->data = k;
		temp = temp -> next;
	}
	temp=head;
	printf("Entered DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
	}
	temp=head;
	reverse(&head,temp);
	temp=head;
	printf("Reverse DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
	}
}


