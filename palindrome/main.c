/*
 * main.c
 *
 *  Created on: 27-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int a=246642,k,s;
	char a1[10];
	int i=0;
	int length;
	s=a;
	printf("int=%d\n",s);
	{
		while(s!=0){
			a1[i]=s%10+'0';
			printf("%c",a1[i]);
			fflush(stdout);
			s=s/10;
			i++;
		}
		a1[i]='\0';
	}
	for(i=0;a1[i];i++);
	length=strlen(a1);
	printf("\n%d",length);
	k=0;
	{
		for(i=0;i<=length-1;i++)
		{
			k=((k*10+a1[i])-'0');
		}
		printf("\nint=%d ",k);

	}
	if(a==k)
	{
		printf("\n%d is a palindrome number",a);
	}
	else
	{
		printf("\n%d is not a palindrome number",a);
	}
}





