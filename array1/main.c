/*
 * main.c
 *
 *  Created on: 06-Jan-2024
 *      Author: lenovo
 */
//write a c program to input 10 numbers through the keyboard into an array and find the biggest and smallest number in an unsorted array without using any sorting technique
#include<stdio.h>
int main()
{
	int a[10],m;
	int biggest=0;
	int smallest;
	printf("enter a 10 numbers:");
	fflush(stdout);
	for(m=0;m<10;m++)
	{
		scanf("%d",&a[m]);
		fflush(stdout);
	}
	smallest=a[0];
	for(m=0;m<=9;m++)
	{

		if(biggest<a[m])
		{
			biggest=a[m];
		}

		if(smallest>a[m])
		{
					smallest=a[m];
				}
	}
	printf("biggest number=%d\n",biggest);
	fflush(stdout);
	printf("smallest number=%d\n",smallest);
		fflush(stdout);
}

