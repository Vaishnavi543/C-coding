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
	char s1[]="abc xyz pqr // abc xyz pqr ";
	int i=0,j=1;
	printf("entered string is = %s",s1);
	for(i=0;s1[i];i++)
	{
		if(s1[i]=='/' && s1[i+1]=='/')
		{
			while(s1[i]!='\n' && s1[i]!='\0')
			{
				j++;
				i++;
			}
		}
	}
	j++;
	s1[i-j]=s1[i];
	s1[i]='\0';
	printf("\ncomment removed string = %s",s1);
	fflush(stdout);
}






