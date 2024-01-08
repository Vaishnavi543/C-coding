/*
 * main.c
 *
 *  Created on: 06-Jan-2024
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int i=0,j=0;
	char a[10];
	char s[]={"char(*(*x())[])()"};
	for(i=0;s[i];i++)
		if((s[i]=='*') && (s[i+1]>='a' && s[i+1]<='z'))
	{
		a[j]=s[i+1];
		printf("%s is ",a);
		//fflush(stdout);
		j=i+1;
	}
if (s[j+1]=='(' && s[j+2]==')')
	{
		printf("function returning ");
		//fflush(stdout);
	}
if(s[j-1]=='*')
	{
		printf("pointer to ");
	}
if(s[j+4]=='[' && s[j+5]==']')
{
	printf("array of ");
}
if (s[j+6]==')')
{
	if(s[j-3]=='*')
		printf("pointer to ");
}
if(s[j+7]=='(' && s[j+8]==')')
{
	printf("function returning ");
}
{
for(i=0;s[i]!=s[j-4];i++)
{
	if(s[i]>='a' && s[i]<='z')
		{
			printf("%c",s[i]);
		}
}
}
}

