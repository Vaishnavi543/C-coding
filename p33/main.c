/*
 * main.c
 *
 *  Created on: 22-Dec-2023
 *      Author: lenovo
 */
//3.3
//expand function
#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	printf("enter a string :");
	fflush(stdout);
	scanf("%[^\n]",s);
	fflush(stdout);
	if(s[i]=='a' && s[i+1]=='-' && s[i+2]=='z')
	{
		for(i=0;i<=25;i++)
		{
			s[i]='a'+i;
			printf("%c ",s[i]);
		}
	}
	if(s[i]=='0' && s[i+1]=='-' && s[i+2]=='9')
	{
		for(i=0;i<=9;i++)
		{
			s[i]='0'+i;
			printf("%c ",s[i]);
		}
	}
}


