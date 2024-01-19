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
	int count=0;
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
	*ptr=(char*) malloc (count * (sizeof(char*)));
	fclose(fp);
	fp=fopen("main.txt","r");
	{
	while(fgets(p,50,fp)!=NULL)
		//for(i=0;i<count;i++)
			{
				ptr[i]=(char*) malloc (100*(sizeof(char)));
				scanf("%s",ptr[i]);
				fflush(stdout);
				i++;
			}
	}
	for(i=0;i<count;i++)
		{
			printf("entered string %d:%s\n",i+1,ptr[i]);
			fflush(stdout);
		}
	fclose(fp);
}





