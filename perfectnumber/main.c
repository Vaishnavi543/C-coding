/*
 * main.c
 *
 *  Created on: 27-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int a,b,s=0;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&a);
	fflush(stdout);
	for(b=1;b<a;b++)
	{
		if(a%b==0)
		{
			s=s+b;
		}
	}
	if(s==a)
	{
		printf("%d is a perfect number",a);
		fflush(stdout);
	}
	else
	{
			printf("%d is not a perfect number",a);
			fflush(stdout);
		}
}

