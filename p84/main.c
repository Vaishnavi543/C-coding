//add in between the nodes
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};

void addinbetween(int d,struct node *t)
{
	struct node *ptr;
	ptr = malloc(sizeof(struct node));
	ptr -> data = d;
	ptr -> next = t -> next;
	t -> next = ptr;
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j,k,n,m;
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
	printf("enter a value after that you want to add a new value:");
	fflush(stdout);
	scanf("%d",&m);
	printf("enter a data to add in between :");
	fflush(stdout);
	scanf("%d",&n);
	for(i =0; i<j ; i++)
	{
		printf("enter the data for node %d: ",i+1);
		fflush(stdout);
		scanf("%d",&k);
		temp->data = k;
		temp = temp -> next;
	}
	j=j+1;
	temp = head;
	printf("DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		if(temp->data==m)
				{
					addinbetween(n,temp);
				}
		temp = temp -> next;
	}
}


