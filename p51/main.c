/*
 * main.c
 *
 *  Created on: 02-Jan-2024
 *      Author: lenovo
 */
//5.1
//getint treats a + or - not followed by a digit as a valid representation of zero.fix it to such a character back on the input.
#include<stdio.h>
int main()
{
	char a[]="+123";
	int i=0;
	int sum=0,sign=0;
	sign = (a[i]=='-'? (-1) : 1);
	for(i=0;a[i];i++)
	{
		if ((a[i]>='0' && a[i]<='9'))
		{
			printf("%s\n",a);
			fflush(stdout);
			sum=sum*10+(a[i]-'0');
		}
	}
	sum=(sum*sign);
	printf("%d",sum);

}
