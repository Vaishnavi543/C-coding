/*
 * main.c
 *
 *  Created on: 28-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
#include "mystrcmp.h"
int main()
{
	char a[]="abcde";
	char b[]="abcd";
	int c;
	if (mystrcmp(a,b,c)==1)
		printf("%s and %s are same",a,b);
	else
		printf("%s and %s are not same",a,b);

}


