/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
//5.3
//strcat function which copies the string t to the end of s.
#include<stdio.h>
char stringcat(char* s,char* t)
{
	int i,j=0,k;
	for(i=0;s[i];i++);
	k=i;
	for(j=0;t[j];j++)
	{
		s[k]=t[j];
		k++;
	}
	return 0;
}
int main()
{
	char a[20]="hello";
	char b[]=" how are you";
	stringcat(a,b);
	printf("%s",a);
}


