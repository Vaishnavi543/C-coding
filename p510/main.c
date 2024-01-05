/*
 * main.c
 *
 *  Created on: 04-Jan-2024
 *      Author: lenovo
 */
//5.13
//tail n function which prints last n lines of the input.by default n=10 but it can change by optional arguement.
#include<stdio.h>
char p[15][100];
char tail_n(int n,char** s)
{
	printf("enter a string: \n");
	fflush(stdout);
	for(int n=0;n<15;n++)
	{
		scanf("%s",p[n]);
		fflush(stdout);
	}
}
int main()
{
	int m;
	tail_n(m,p);
	for(m=0;m<=14;m++)
	{
		printf("%s\n",p[m]);
		fflush(stdout);
	}
	printf("\n \n");
	for(m=14;m>=5;m--)
	{
		printf("%s\n",p[m]);
		fflush(stdout);
	}
}
//ptr = ( cast_ type *) malloc (byte_size);
//p=(int *)malloc(numofe*sizeof(int));



