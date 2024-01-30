/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.12
//prints its inputs one word per line
#include<stdio.h>
int  main ()
{
	int c;
	while ((c=getchar())!='z')
	{
		if(c!=' ')
		{
			putchar(c);
		}
		else
		{
			printf("/n");
		}
	}
	return 0;
}


