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
	char a[]="the best end ";
	char b[20];
	char t[]="the";
	char e[]="end";
	int i,j;
	for(i=0,j=0;a[i];i++)
	{
		b[j]=a[i];
		j++;
		if(a[i]==' ')
		{
			b[j-1]='\0';
			{
			if(strcmp(t,b)==0 || strcmp(e,b)==0)
			{
				for(i=0;a[i];i++,j++)
				a[i]=a[j];

			}
			else
			{
				printf("%s",a);
				fflush(stdout);
			}
			}
			j=0;
			i=0;
		}

	}
}

