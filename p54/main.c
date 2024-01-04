/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
//5.4
//strend(s,t) it returns 1 if the string t occurs end of the s string else returns 0.
#include<stdio.h>
char stringend(char* s,char* t)
{
	int i,j=0,length1,length2,flag=0;
	for(i=0;s[i];i++);
	length1=i-1;
	for(j=0;t[j];j++);
	length2=j-1;
	for(j=length2,i=length1;j>=0 ;j--,i--)
	{
		if(s[i]==t[j])
		{
			flag=1;
		}
		else
		{
			flag=0;
		}

	}
	if(flag)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}

}
int main()
{
	char a[20]="hello how are you";
	char b[]=" how are you";
	stringend(a,b);
	//printf("abc");
}


