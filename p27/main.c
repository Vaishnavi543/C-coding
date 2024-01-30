/*
 * main.c
 *
 *  Created on: 19-Dec-2023
 *      Author: lenovo
 *
 */
//2.10
//write the function lower which converts upper case letter to lower case using conditional operation
#include<stdio.h>
char lower(char c)
{
	return((c>='A' && c<='Z') ? (c=c+'a'-'A') : c);
}
int main()
{
	char c ;
	printf("enter a character:");
	fflush(stdout);
	scanf("%c",&c);
	putchar(lower(c));
}


