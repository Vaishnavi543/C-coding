/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.19 write a function reverse(s) that reverse the character string s.use it to write a program that reverses its input a line at a time.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	int i=0,j=0,length=0;
	printf("enter a string:");
	fflush(stdout);
	scanf("%[^\n]",s1);
	length = strlen(s1);
	printf("length of the string is :%d\n",length);
	fflush(stdout);
	for(i=length-1;i>=0;i--)
	{
		s2[j++]=s1[i];
	}
	s2[j]='\0';
	printf("entered string:%s\n",s1);
	fflush(stdout);
	printf("reversed string:%s",s2);
	fflush(stdout);
	return 0;
}

