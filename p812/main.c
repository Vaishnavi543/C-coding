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
	struct node *pre,*i;
	int t;
	t=(*h);
	while(p->next!=(*h))
	{
		pre=p;
		p=p->next;
	}
	t=(*h)->data;
	(*h)->data=p->data;
	p->data=t;
	i=(*h)->next;
	t=i->data;
	i->data=pre->data;
	pre->data=t;
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j=7,k;
//	printf("enter the number of nodes:");
//	fflush(stdout);
//	scanf("%d",&j);
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
//		printf("enter the data for node %d: ",i);
//		fflush(stdout);
//		scanf("%d",&k);
		temp->data = i;
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


