/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int i,k,j;
	for(i=0,k=0;k>=5;i++,k++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j!=0)
			{
				printf("%d",i);
			}
		}

	}
}


