/*
 * main.c
 *
 *  Created on: 05-Jan-2024
 *      Author: lenovo
 */
//5.18
//dcl
//char(*(*X())[])()
#include<stdio.h>
int main()
{
	int i=0,j=0;
	char a[10];
	char s[]={"char(*(*x())[])()"};
	for(i=0;s[i];i++)

	if((s[i]=='*') && (s[i+1]>='a' && s[i+1]<='z'))
	{
		a[j]=s[i+1];
		printf("%s is ",a);
		//fflush(stdout);
	}

	else if(s[i+2]=='(' && s[i+3]==')')
	{
		printf("function returning");
		//fflush(stdout);
	}
//	if(s[i+4]==')')
//	{
//		i=
//	}

}


