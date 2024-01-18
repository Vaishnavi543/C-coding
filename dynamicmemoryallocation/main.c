#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0,i;
	char p[100];
	int *ptr;
	printf("enter a number of strings:");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdout);
	printf("entered number :%d\n",n);
	ptr=(int*)malloc(n*(sizeof(char)));
	for(i=0;i<n;i++)
	{
		printf("string %d= ",i+1);
		fflush(stdout);
		scanf("%s",p);
	}
}

