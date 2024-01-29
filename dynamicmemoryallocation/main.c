//take an input from user and give output using dynamic memory allocation malloc.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=5,i;
	char **ptr;
	printf("enter a number of strings:");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdout);
	printf("entered number :%d\n",n);
	fflush(stdout);
	(ptr)=(char*)malloc(n*(sizeof(char)));
	for(i=0;i<n;i++)
	{
		ptr[i]=(char*)malloc(100* (sizeof(char)));
		scanf("%s",ptr[i]);
		fflush(stdout);
	}
	for(i=0;i<n;i++)
	{
		printf("entered string %d:%s\n",i+1,ptr[i]);
		fflush(stdout);
	}
}


