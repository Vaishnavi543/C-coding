/*
 * main.c
 *
 *  Created on: 26-Dec-2023
 *      Author: lenovo
 */
//4.1
//function strrindex
//position of the rightmost occurance of t in s
#include<stdio.h>
#include<string.h>
int strrindex(char *s,char a)
{

	int length;
	int i;
	length=strlen(s);
	printf("%d\n",length);
	fflush(stdout);
	for(i=length-1;i>=0;i--)
	{
		if(s[i]==a)
		{
			return length-i;
			break;
		}


	}
	return -1;
}

int main()
{
	char a='t';
	char s[]="you are the best one.";
	printf( "%d ",strrindex(s,a));


}


