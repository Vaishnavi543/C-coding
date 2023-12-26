/*
 * main.c
 *
 *  Created on: 26-Dec-2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	int f,i=0,a=0;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&f);
	fflush(stdout);
	a=f;
	for(i=1;i<f;i++)
	{
		a=a*i;
	}
	printf("factorial is=%d",a);

}


