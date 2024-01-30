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
	int i=0,c=0;
	int flag=0;
	int lim;
	for(i=0; ;i++)
	{
		if(i>=(lim-1))
		{
			break;
		}
		if((c=getchar())=='\n')
		{
			break;
		}
		if(c=='z')
		{
			break;
			{
				i++;
			}
		}
	}
	printf("hello");
}




