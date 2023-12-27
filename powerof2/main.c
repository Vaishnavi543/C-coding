/*
 * main.c
 *
 *  Created on: 27-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
//{
//	int a,b;
//	printf("enter a number:");
//	fflush(stdout);
//	scanf("%d",&a);
//	fflush(stdout);
//	{
//	while(b!=1 && b%2!=0)
//	{
//		b=b/2;
//	}
//	}
//	if(b==1)
//	{
//		printf("%d is power of 2.",a);
//		fflush(stdout);
//	}
//	else
//	{
//		printf("%d is not a power of 2.",a);
//		fflush(stdout);
//	}
//
//}
{
	int n,a;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&a);
	fflush(stdout);
	for(n=0;n<=31;n++)
	{
		if((a&(1<<n))==a)
		{
			printf("%d is power of 2",a);
			//break;
		}
//		else
//		{
//			printf("%d is not a power of 2",a);
//			//break;
//		}
//		break;



}
}
