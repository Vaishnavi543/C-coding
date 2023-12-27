/*
 * main.c
 *
 *  Created on: 27-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
#include "calc.h"
int main()
{
	int p=20,q=2;
	char x;
	printf("sign for the operation: ");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdout);
	printf("%d",calc(p,x,q));
}
