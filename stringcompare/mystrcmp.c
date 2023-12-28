/*
 * mystrcmp.c
 *
 *  Created on: 28-Dec-2023
 *      Author: lenovo
 */
//compare function
#include<stdio.h>
int mystrcmp(char* s1,char*s2,int k)
{
	int i,j;
	k=0;
	for(i=0,j=0;s1[i];i++,j++)
	{
		if(s1[i]==s2[j])
			k=1;
		else
			k=0;

	}
	return k;

}

