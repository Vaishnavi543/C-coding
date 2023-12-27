/*
 * main.c
 *
 *  Created on: 25-Dec-2023
 *      Author: lenovo
 */
//32 bit number binary
#include<stdio.h>
#include<string.h>
int main()
//{
//	long long int a=12345678;
//	char a1[10];
//	char a2[10];
//	long long int a3,b;
//	int i=0,k;
//	int j=0;
//	while(a!=0)
//	{
//		a1[i]=a%10+'0';
//		a=a/10;
//		i++;
//	}
//	{
//		for(j=0;j<=i;i--)
//
//			{
//				a2[j]=a1[i];
//				printf("%c ",a2[j]);
//			}
//
//
//			for(k=0;k<=31;k++)
//			{
//				a3=a2[j]-'0';
//
//				k++;
//
//			}
//			while(a3!=0)
//			{
//			b=a3%2;
//			printf("%d",b);
//			a3=a3/2;
//		}
//			a3++;
//
//
//
//	}
//}

{
	int a=0xa;
	int b=0;
	int i;

	for(i=0;i<=7;i++)
	{
		b = a & 1;
		printf("%d",b);
		a=a>>1;
		i++;
	}


	return 0;
}





