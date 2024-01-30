/*
 * main.c
 *
 *  Created on: 05-Jan-2024
 *      Author: lenovo
 */
//recursion function to find largest element in unsorted array.
#include<stdio.h>
int length;
int largest(int* a)
{
	static int large;
	if(length>0)
	{
		if(large<=*a)
		{
			large=*a;
		}
		length--;
		largest(a+1);
		return large;
	}
}
int main()
{
	int i,j;
	int b[]={55,7,12,100,6,1,5,0};
	for(i=0;b[i];i++);
	length=i;
	j=largest(b);
	printf("%d",j);
}


