/*
 * main.c
 *
 *  Created on: 25-Dec-2023
 *      Author: lenovo
 */
//bitwise operator odd/even
#include<stdio.h>
int main()
{
	int a=116;
	if((a & 1) == 0)
	{
		printf("even number");
		fflush(stdout);
	}
	else
	{
		printf("odd number");
		fflush(stdout);
	}


}

