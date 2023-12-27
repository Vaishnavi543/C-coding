/*
 * main.c
 *
 *  Created on: 26-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=100;i++)
	{
		for(j=1;j<=7;j++)
		{
			if((i/j)==i)
			{
				if((i/j)==1)
				{
					printf("%d ",i);
				}

				else
				{
					break;
				}
			}


		}
	}
}


