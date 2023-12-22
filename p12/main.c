/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.23
//write a program to remove all comments from a C program .don't forget to handle quotd strings and character constants properly.C comment do not nest.

#include<stdio.h>
#include<string.h>
int main()

{
	char s1[100];
	char s2[100];
	int i=0,j=0;
	printf("enter a string :");
	fflush(stdout);
	scanf("%s",s1);
	fflush(stdout);

	for(i=0;s1[i];i++)
	{
		if(s1[i]=='/' && s1[i+1]=='/')
		{
			while(s1[i]!='\n' && s1[i]!='\0')
			{
				j++;
			}
		}
		else
		{
			s1[i++]=s2[j++];
		}
	}
	s2[j]='\0';
	for(i=0;i<=j;i++)
	{
		s1[i]=s2[j];
	}
	printf("comment removed string= %s",s2[j]);
	return 0;
}






