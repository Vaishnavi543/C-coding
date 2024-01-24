//swap two nodes in a linked list
//limitation for last node
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};

void swapnodes(struct node *p,int p1,int p2)
{
	struct node *pre,*t1,*t2;
	int t3;
	int position=1;
	while(p->next!= NULL);
	{
		pre=p;
		p=p->next;
		if(position==p1)
		{
			t1=pre;
			t3=t1->data;
		}
		if(position==p2)
		{
			t2=pre;
			t1->data=t2->data;
			t2->data=t3;
		}
		position++;
	}
}
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j=5,k,position1=1,position2=5;
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
	for(i =1; i<=j ; i++)
	{
		printf("enter the data for node %d: ",i);
		fflush(stdout);
		scanf("%d",&k);
		temp->data = k;
		temp = temp -> next;
	}
	temp = head;
	printf("position 1 for node swapping:");
	fflush(stdout);
	scanf("%d",&position1);
	printf("position 2 for node swapping:");
	fflush(stdout);
	scanf("%d",&position2);
	swapnodes(temp,position1,position2);
	printf("DATA\n");
	fflush(stdout);
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
	}
}


