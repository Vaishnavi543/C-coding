/*
 * main.c
 *
 *  Created on: 25-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int a=0xaabbccdd,n,b;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdout);
	b= (a >> (n*8)) & 0x000000ff;
	printf("%x of byte %d is %x",a,n,b);
}

