/*
 * main.c
 *
 *  Created on: 15-Dec-2023
 *      Author: lenovo
 */
//type conversion
#include<stdio.h>
//int main()
//{
//	int i,n;
//	for(i=0;i<=100;i++)
//	printf("%s",atoi(char s[100]))
//return 0;
//}

int atoi(char s[100]);
{
	int i,n
	n=0;
	for(i=0;s[i]>='0'&&s[i]<='9';++i)
		n=10*n+(s[i]-'0');
	return n;
}

