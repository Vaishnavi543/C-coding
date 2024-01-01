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
	static int i=0;
//	static char b[10];
	if(a!=0)
	{
	b[i]=a%10+'0';
	++i;
	itoa((a/10),b[++i]);

//	return b[i];
	}
}
int main()
{
	int p=1234;
	char q[10];
	char r[10];
	r=itoa(p,q);
	printf("%s",r);
	fflush(stdout);
}

