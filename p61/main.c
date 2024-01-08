/*
 * main.c
 *
 *  Created on: 08-Jan-2024
 *      Author: lenovo
 */

#if 0
#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	int submarks[4];
};
int main()
{
	int i,j;
	struct student stuarr[3];
	for(i=0;i<3;i++)
	{
		printf("enter data for student %d\n",i+1);
		fflush(stdout);
		printf("enter name:");
		fflush(stdout);
		scanf("%s",stuarr[i].name);
		fflush(stdout);
		printf("enter a roll number:");
		fflush(stdout);
		scanf("%d",&stuarr[i].rollno);
		fflush(stdout);
		for(j=0;j<4;j++)
		{
			printf("enter marks for subject %d:",j+1);
			fflush(stdout);
			scanf("%d",&stuarr[i].submarks[j]);
			fflush(stdout);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("data of student %d\n",i+1);
		fflush(stdout);
		printf("name:%s,roll number:%d\n marks:",stuarr[i].name,stuarr[i].rollno);
		fflush(stdout);
		for(j=0;j<4;j++)
			printf("%d  ",stuarr[i].submarks[j]);
		fflush(stdout);
		printf("\n");
		fflush(stdout);
	}
}
#endif

//getword that count a keyword from the string

#include <stdio.h>
#include<string.h>
struct key{
	char *word;
	int count;
}
keytab[] ={
		{"auto",0},
		{"break",0},
		{"case",0},
		{"char",0},
		{"const",0},
		{"continue",0},
		{"default",0},
		{/* . . . */},
		{"unsigned",0},
		{"void",0},
		{"volatile",0},
		{"while",0}
};
#define NKEYS (sizeof keytab/sizeof keytab[0])
int main()
{
	char a[]={"auto break case break default void while auto volatile"};
	char b[100];
	int i,j=0,k=0;
	for(i=0;a[i];i++)
	{
		b[i]=a[i];
		if(a[i]==' ')
		{
			b[i]='\0';
			printf("%s ",b);
			//fflush(stdout);
			for(j=0;j<NKEYS;j++)
			{
				int x=strcmp(b,keytab[j].word);
				if(x==0)
				{
					printf("%s ",b);
					keytab[j].count++;

				}
				break;
			}
		}
	}

		printf("%s  %d\n",keytab[j].word,keytab[j].count);
		fflush(stdout);

}














































