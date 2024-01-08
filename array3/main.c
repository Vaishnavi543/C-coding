/*
 * main.c
 *
 *  Created on: 06-Jan-2024
 *      Author: lenovo
 */
//write a c program to reverse the elements of a given array
#include<stdio.h>
int main()
{
	int i=0,j=0,temp=0;
	int a[]={100,80,60,40,20,10,0,1};
	for(i=0;a[i];i++);
	int length=i+1;
	for(i=length,j=0;i>length/2;i--,j++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<=length;i++)
	{
		printf("%d ",a[i]);
	}
}



