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
	int a[]={5,10,15,20,25,30};
	int n=4,i=0;
	for(i=0;i<=5;i++)
	{
	if(i==(n-1))
	continue;
	printf("%d ",a[i]);
}
}


