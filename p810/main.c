//add at begin in circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};
void addatbeg(struct node *p,struct node **h)
{
		struct node *ptr,*a=malloc(sizeof(struct node));
		a->data=5;
		(*h)->data=p->data;
		ptr=p->next;
		while(ptr->next != (*h))
		{
			ptr=ptr->next;
		}
		ptr->next=a;
		a->next=(*h);
		(*h)=a;
//		printf("%d",((*h)->data));
//		fflush(stdout);
		while(p->next != (*h))
		{
			p=p->next;
		}
		p=p->next;
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j=5,k;
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
	for(i =0; i<j ; i++)
	{
		printf("enter the data for node %d: ",i+1);
		fflush(stdout);
		scanf("%d",&k);
		temp->data = k;
		temp = temp -> next;
	}
	temp = head;
	addatbeg(temp,&head);
	temp=head;
	j=j+1;
	printf("DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
	}
}


