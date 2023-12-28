/*
 * main.c
 *
 *  Created on: 28-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
#include "mystrncpy.h"
int main()
{
	char a[]="pqrstuv";
	char b[10];
	int c=3;
	mystrncpy(a,b,c);
	printf("%s",b);
}


