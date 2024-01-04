/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int i=2,k=0,j,flag=0;
	while(k<=5)
	{

		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}

		}
		if(!flag)
			{
				printf("%d ",i);
				k++;
			}

i++;
flag=0;
}
}




