//deleting the last node
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};

void deleteatend(struct node *p)
{
	struct node *pre;
	if(p->next!=NULL)
	{
		pre=p;
		p=p->next;
		free(p);
	}
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j=5,k;
//	printf("enter the number of nodes:");
//	fflush(stdout);
//	scanf("%d",&j);
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
//		printf("enter the data for node %d: ",i+1);
//		fflush(stdout);
//		scanf("%d",&k);
		temp->data = i;
		temp = temp -> next;
	}
	temp = head;
	deleteatend(temp);
	printf("DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
	}
}




