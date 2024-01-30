/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.18 write a program to remove trailing blanks and tabs from each line of input and to delete entirely blank lines.
#include<stdio.h>
#include<string.h>
int main()
{
	int c;
	printf("enter a string:");
	fflush(stdout);
	while ((c=getchar())!='z')
	{
		if(c=='\n' || c=='\t' )
		{
			c='\b';
		}
		else
		{
			putchar(c);
		}
	}
}


