/*
 * main.c
 *
 *  Created on: 06-Jan-2024
 *      Author: lenovo
 */
//write a c program to find out second largest and second smallest element of an unsorted array without using any sorting technique.
#include<stdio.h>
int main()
{
	int a[10],m;
	int biggest=0;
	int secondlargest;
	int smallest=0;
	int secondsmallest;
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
			secondlargest=biggest;
			biggest=a[m];
		}

		if(smallest>a[m])
		{
			secondsmallest=smallest;
					smallest=a[m];
					//secondsmallest=smallest;
				}

	}

	printf("second biggest number=%d\n",secondlargest);
	fflush(stdout);
	printf("second smallest number=%d\n",secondsmallest);
		fflush(stdout);
}



