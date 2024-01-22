//linked a 5 nodes
//traverse in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //SELF REFERENTIAL STRUCTURE
};
int main()
{
	struct node *head=NULL,*temp,*temp2;
	int i,j=5;
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
		temp->data = i;
		temp = temp -> next;
	}
	temp = head;
	printf("DATA\n");
	for(i =0; i<j ; i++)
	{
		printf("%d\n", temp->data);
		fflush(stdout);
		temp = temp -> next;
	}
}


