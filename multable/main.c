/*
 * main.c
 *
 *  Created on: 26-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int n,mul,i;
	printf("enter a number for multiplication table:");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdout);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d x %d = %d\n",n,i,mul);
	}
}


