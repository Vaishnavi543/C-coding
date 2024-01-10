/*
 * main.c
 *
 *  Created on: 06-Jan-2024
 *      Author: lenovo
 */
//write a c program to delete an elements at desired position from an array
#include<stdio.h>
int main()
{
	int a[]={5,10,15,20,25,50,100};
	int n,j=0,k=0;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdout);
	printf("entered number is %d\n",n);
	fflush(stdout);
	int length=sizeof(a)/sizeof(a[0]);
	{
		for(k=0;k<=length;k++)
		{
			if(a[k]==n)
			{
				printf("position of %d is %d\n",n,k+1);
				fflush(stdout);
				for(j=k;j<=length-1;j++)
				{
					a[j]=a[j+1];
				}
				for(int i=0;i<length-1;i++)
				{
					printf("%d ",a[i]);
				}
				break;
			}
		}
	}
}


