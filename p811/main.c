//delete in circular linked list by user define position
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};
void deleteincircular(int position,struct node *p,struct node **h)
{
	int count=1;
	struct node *ptr,*pre,*t;
	(*h)->data=p->data;
	if(position==1)
	{
		ptr=p->next;
		while(ptr->next != (*h))
		{
			ptr=ptr->next;
		}
		ptr->next=(*h)->next;
		t=(*h);
		(*h)=t->next;
		free(t);
	}
	else
	{
		while(position!=count)
		{
			count++;
			pre=p;
			p=p->next;
		}
		t=pre->next;
		pre->next=p->next;
		free(t);
	}
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j=5,k,pos=3;
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
	temp = head;
		printf("enter a position:");
		fflush(stdout);
		scanf("%d",&pos);
	deleteincircular(pos,temp,&head);
	temp=head;
	printf("DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
	}
}


