/*
 * main.c
 *
 *  Created on: 18-Dec-2023
 *      Author: lenovo
 */
//2.4
//write a alternate version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="abcd pqr ab" ;
	char s2[]="ad";
	char s3[100];
	int i;
	int j;
	int k=0 ;
	int flag=0;
	printf("string1 is:%s\n",s1);
	fflush(stdout);
	printf("string2 is:%s\n",s2);
	fflush(stdout);
	for (i=0;s1[i]!='\0';i++)
	{
		flag=0;
		for (j=0;s2[j];j++)
		{
			if (s2[j]==s1[i])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			s3[k++]=s1[i];
		}
		s3[k]='\0';
	}
	printf("squeezed string1 :%s",s3);
}


