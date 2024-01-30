/*
 * main.c
 *
 *  Created on: 15-Dec-2023
 *      Author: lenovo
 */
//2.3
//htoi function for converting string to hexadecimal digit
//type conversion
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	char a[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i=0 ;
	printf("enter a string:");
	fflush(stdout);
	scanf("%[^\n]",s);
	{
		for(i=0;s[i];i++)
		{
			printf("%c%c ",a[s[i]/16], a[s[i]%16]);
		}
	}
}
