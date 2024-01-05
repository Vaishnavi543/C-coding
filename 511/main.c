/*
 * main.c
 *
 *  Created on: 05-Jan-2024
 *      Author: lenovo
 */
//5.14
//sorting array(convert element of array in increasing order)
#include<stdio.h>
int main()
{
	int i,j=0,temp=0;
	int a[]={5,7,12,45,6,1,5,0};
	for(i=0;i<8;i++)
	{
		for(j=i;j<8;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d ",a[i]);
		temp=0;
	}
}


