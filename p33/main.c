/*
 * main.c
 *
 *  Created on: 22-Dec-2023
 *      Author: lenovo
 */
//3.3
//expand function
#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("enter a string :");
	fflush(stdout);
	scanf("%[^\n]",s);
	fflush(stdout);
	{
//	for(i=0;s[i]<='\n';i++)
//	{
		i=0;
//		if(s[i]=='a' && s[i+1]=='-' && s[i+2]=='z')
//		{
//			for(i=0;s[i]='a'+i,i<=25;i++)
//			{
//				if(s[i]<='z')
//				{
//					printf("%c ",s[i]);
//				}
//			}
//		}
//	}
	if(s[i]=='0' && s[i+1]=='-' && s[i+2]=='9')
	{
		for(i=0;s[i]='0'+i,i<=9;i++)
		{
			if(s[i]<='9')
			{
				printf("%c",s[i]);
			}
		}
	}

}
}

