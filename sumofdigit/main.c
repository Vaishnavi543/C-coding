/*
 * main.c
 *
 *  Created on: 26-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int s=0,a;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&a);
	fflush(stdout);
	while(a!=0)
	{
		s=s+(a%10);
		a=a/10;
	}
	printf("sum of digit is  %d",s);
}


