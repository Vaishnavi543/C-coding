//search an element position using recursion in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};
//void ll(struct node *p)
//{
//	if(p->next!=NULL)
//	{
//		printf("%d",p->data);
//		fflush(stdout);
//		ll(p->next);
//	}
//}
void keyposition(int v,struct node *t)
{
	int position=1;
	while(t-> data != v )
		{
			position++;
			t=t->next;
		}
	printf("position of %d is %d\n",v,position);
	fflush(stdout);
}

int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j,k,key;
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
	printf("enter key:");
	fflush(stdout);
	scanf("%d",&key);
	keyposition(key,temp);
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

