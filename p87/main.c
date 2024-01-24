//delete nodes by key
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};

void deletebykey(int v,struct node *p,struct node **h)
{
	struct node *pre;
	if((*h) -> data == v)
	{
		*h=p->next;
		while(p->next!=NULL)
		{
			p=p->next;
		}
	}
	else
	{
		while(p->data != v )
		{
			pre=p;
			p=p->next;
		}
		pre->next=p->next;
		free(p);
	}
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j,k,key=0;
	printf("enter the number of nodes:");
	fflush(stdout);
	scanf("%d",&j);
	for(i =0;i<j ; i++)
	{
		temp = malloc(sizeof(struct node));
		if(head == NULL)
		{
			head = temp;
			head -> next = NULL;
		}
		else
		{
			temp2 = head;
			while(temp2->next != NULL)
			{
				temp2 = temp2->next;
			}
			temp2->next = temp;
			temp -> next = NULL;
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
	printf("enter key that you want to delete:");
	fflush(stdout);
	scanf("%d",&key);
	deletebykey(key,temp,&head);
	temp=head;
	printf("DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
		if(temp==NULL)
		{
			break;
		}
	}
}




