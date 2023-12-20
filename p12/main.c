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
	char s[100];
	int i=0;
	printf("enter a string :");
	fflush(stdout);
	scanf("%[^z]",s);
	fflush(stdout);
	{
		for(i=0;s[i];i++)
		{
			if(s[i]=='/' && s[i+1]=='/')
			{
				for(i=0;s[i];i++)
				{
					if(s[i]=='\n')
					{
						s[i]=s[i+1];
					}
					break;
				}
			}
		}
		printf("comment removed string= %c",s[i]);
	}


return 0;
}


