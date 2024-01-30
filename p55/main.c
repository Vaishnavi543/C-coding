/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
//5.5
//strncmp,strncpy,strncat(s,t,n)
#include<stdio.h>
char stringncat(char* s,char* t,int n)
{
	int i,j=0,k;
	for(i=0;s[i];i++);
	k=i;
	for(j=0;j<=n;j++)
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
	int m=0;
	printf("enter the length that you have to copy: ");
	fflush(stdout);
	scanf("%d",&m);
	fflush(stdout);
	stringncat(a,b,m);
	printf("%s",a);
	fflush(stdout);
}



