/*
 * main.c
 *
 *  Created on: 29-Dec-2023
 *      Author: lenovo
 */
//4.12
//recursion function of itoa
#include<stdio.h>
char itoa(int a,char* b)
{
	if(a!=0)
	{
		*b=a%10+'0';
		itoa((a/10),++b);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int p=1234;
	char q[10];
	itoa(p,q);
	printf("%s",q);
	fflush(stdout);
}

