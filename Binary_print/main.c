/*
 * main.c
 *
 *  Created on: 25-Dec-2023
 *      Author: lenovo
 */


#include<stdio.h>
#include<string.h>
int main()
{
//	int a = 0x12345678;
//	int i = 0;
//	for(i=31;i>=0;i--)
//	{
//		if((a >> i) & 1)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//
//	}
//}

	int a=0x12345678;
		int b=0;
		int i;

		for(i=31;i>=0;i--)
		{
			b = (a>>i) & 1;
			printf("%d ",b);

		}
}
