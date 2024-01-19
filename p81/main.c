//linked a 5 nodes
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int i;
	struct node *next;
};
void linkedlist(struct node* ptr,int number)
{
	int count=0;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->i);
		fflush(stdout);
		ptr=ptr->next;
		count++;
		if(ptr->i==number)
		{
			printf("%d is at %d position\n",number,count+1);
			fflush(stdout);
		}
	}
	printf("number of elements=%d",count);
	fflush(stdout);
}
int main()
{
	int n=15;
	struct node *a,*b,*c,*d,*e;
	a=(struct node*)malloc(sizeof(struct node));
	b=(struct node*)malloc(sizeof(struct node));
	c=(struct node*)malloc(sizeof(struct node));
	d=(struct node*)malloc(sizeof(struct node));
	e=(struct node*)malloc(sizeof(struct node));
	a->i=5;
	a->next=b;
	b->i=10;
	b->next=c;
	c->i=15;
	c->next=d;
	d->i=20;
	d->next=e;
	e->i=25;
	e->next=NULL;
	//searching in a list
//	printf("enter a number: ");
//	fflush(stdout);
//	scanf("%d",&n);
//	fflush(stdout);
	linkedlist(a,n);
}
