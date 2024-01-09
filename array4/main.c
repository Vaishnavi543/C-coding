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
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=4,i=0,j=0;
	int length=sizeof(a)/sizeof(a[0]);

	{
		for(j=n-1;j<=length-1;j++)
		{
			a[j]=a[j+1];
		}
		for(int i=0;i<length-1;i++)
		{
			printf("%d ",a[i]);
		}
	}
}



