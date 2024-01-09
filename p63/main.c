/*
 * main.c
 *
 *  Created on: 09-Jan-2024
 *      Author: lenovo
 */
//6.3
//remove noise words like 'the' 'and'.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="the best end";
	char b[10];
	char t[]="the";
	char e[]="end";
	int i,j;
	for(i=0,j=0;a[i];i++)
	{
		b[i]=a[i];
		if(a[i]==' ')
		{
			b[i]='\0';
			if(b[i]==t[i] || b[i]==e[i])
			{

			}
		}
	}
}

