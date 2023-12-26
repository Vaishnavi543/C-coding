/*
 * main.c
 *
 *  Created on: 26-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int d,r,a;
//	printf("enter a digit:");
//	fflush(stdout);
//	scanf("%d",&d);
//	fflush(stdout);
	for(d=12345;r!=0;d--)
	{
		r=d%10;
		printf("%d",r);
		fflush(stdout);
		r=d/10;
	}
}


