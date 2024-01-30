/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
//5.7
//readline 2d array
#include<stdio.h>
char p[5][100];
void readline(int n,char** s)
{
	printf("enter a string: \n");
	fflush(stdout);
	for(n=1 ;n<=5;n++)
	{
		scanf("%s",p[n]);
		fflush(stdout);
	}
}
int main()
{
	int m=3;
	readline(m,p);
	printf("%s\n",p[m]);
	fflush(stdout);
}


