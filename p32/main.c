/*
 * main.c
 *
 *  Created on: 21-Dec-2023
 *      Author: lenovo
 */
//switch function for /t and /n
#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	while((c=getchar())!='z')
	{
		switch(c)
		{
		case '\t' :
			printf("\\t",c);
			break;
		case '\n' :
			printf("\\n",c);
			break;
		}
		putchar(c);
	}
}

































