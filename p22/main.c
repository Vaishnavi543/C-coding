/*
 * main.c
 *
 *  Created on: 15-Dec-2023
 *      Author: lenovo
 */
// write a loop equivalent to the for loop above without using && or ||
//for (i=0 ; i<lim-1 && (c=getchar()) != '\n' && c!= EOF ; ++i)
#include<stdio.h>
#include<string.h>
int main()
{
int i=0;
int loop=1;
{
while(loop)
{
	if(i>=lim-1)
	{
		loop=0;
	}
	else if((c=getchar())=='\n')
	{
		loop=0;
	}
	else if(c=='z')
	{
		loop=0;
	}
s[i++]=c;
}
}
}



