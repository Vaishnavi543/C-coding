/*
 * main.c
 *
 *  Created on: 02-Jan-2024
 *      Author: lenovo
 */
//5.2
//getfloat the floating point analog of getint
#include<stdio.h>
#include<math.h>
int main()
{
	char a[]="-123.55";
	int i=0,j=0,k=0;
	int x=0,y=0,sign=0;
	float z=0;
	int flag =0 ;
	sign = (a[i]=='-'? (-1) : 1);
	for(i=0;a[i]!='\0';i++)
	{
		if ((!(a[i]>='0' && a[i]<='9')) && (a[i]!='+') && (a[i]!='-') && (a[i]!='.'))
		{
			printf("%s\n",a);
			fflush(stdout);
			flag =1;
			break;
		}
	}
	{
		if(flag==1)
		{
			printf("Wrong input\n");
		}
		else
		{
			for(i=0;a[i]!='.';i++)
			{
				if ((a[i]>='0' && a[i]<='9'))
				{
					x=x*10+(a[i]-'0');
				}
			}
			for(j=i,k=0;a[j]!='\0';j++,k++)
			{
				if ((a[j]>='0' && a[j]<='9'))
				{
					y=y*10+(a[j]-'0');
					z=pow(10,k);
					z=(y/z);
				}
			}
			z=z+x;
			z=z*sign;
			printf("%f",z);
		}
	}
}






