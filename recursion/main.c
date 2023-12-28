/*
 * main.c
 *
 *  Created on: 28-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
char copy(char *a,char *b)
{
	*b=*a;
	if(*b == 0)
		return 0;

	copy(++a,++b);
}
int main()
{
	char x[]="123";
	char y[10];
	copy(x,y);
	printf("%s",y);
}

