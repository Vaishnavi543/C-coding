//write a program to sorting lines in increasing order.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char p[50]; //array for the strings
	int i=0;
	char **ptr;
	int count=0,j;
	if((fp=fopen("main.txt","r"))==NULL)
	{
		printf("error in opening\n");
		fflush(stdout);
		exit(1);
	}
	while(fgets(p,50,fp)!=NULL)
	{
		count++;
	}
	printf("number of strings in a file:%d\n",count);
	//fflush(stdout);
	fclose(fp);
	fp=fopen("main.txt","r");
	ptr= malloc (count * (sizeof(char)));
	{
		while(fgets(p,50,fp)!=NULL)
		{

			//ptr[i]=p;
			ptr[i]=(char*) malloc (100*(sizeof(char)));
			strcpy(ptr[i],p);
			i++;
		}
		printf("data before sorting\n");
		fflush(stdout);
		for(i=0;i<count;i++)
		{
			printf("%s\n",ptr[i]);
			fflush(stdout);
		}
		fclose(fp);
		for(i=0;i<count-1;i++)
		{
		for(j=0;j<count-1;j++)
		{
			if(strlen(ptr[j])<=strlen(ptr[j+1]))
			{

			}
			else
			{
				char temp[50];
				strcpy(temp,ptr[j]);
				strcpy(ptr[j],ptr[j+1]);
				strcpy(ptr[j+1],temp);
			}
		}
		}
		printf("data after sorting\n");
				fflush(stdout);
		for(i=0;i<count;i++)
		{
			printf("%s\n",ptr[i]);
			fflush(stdout);
		}
	}
}






