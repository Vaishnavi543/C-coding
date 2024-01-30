/*
 * main.c
 *
 *  Created on: 05-Jan-2024
 *      Author: lenovo
 */
//5.15
//upper case lower case folding
#include<stdio.h>
int main()
{
	int i,j=0,temp=0;
	int a[]={'A','b','C','D','e','a','B','c'};
	for(i=0;i<9;i++)
	{
		for(j=i;j<9;j++)
		{
			if(a[i]==(a[j]-32))
			{
				temp=a[i+1];
				a[i+1]=a[j];
				a[j]=temp;
			}
		}
		printf("%c ",a[i]);
		temp=0;
	}
}


