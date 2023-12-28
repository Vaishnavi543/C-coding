/*
 * mystrlen.c
 *
 *  Created on: 28-Dec-2023
 *      Author: lenovo
 */
//function strlen
#include<stdio.h>
int mystrlen(char s)
{
	int i;
	for (i=0;s[i];i++);
	return i-1;
}


