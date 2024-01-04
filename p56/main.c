/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
//5.7
//readline 2d array
#include<stdio.h>
//int main()
//{
//	char p[20][20]=}{"hi","hello","how are you";
// int n=2;
// printf("%s",p[n]);
//
//}

//char p[5][100];
//char readline(int n,char** s)
//{
//	printf("enter a string: ");
//	fflush(stdout);
//	int i = 0;
//	for(i=0;i<5;i++)
//	{
//		scanf("%[^\n]",s[i]);
//	}
//}
//int main()
//{
//	int m=2;
//	readline(m,p);
//	for(int i=0;i<5;i++)
//	{
//		printf("%s\n",p[i]);
//	}
//}

char p[5][100];
char readline(int n,char** s)
{
	printf("enter a string: \n");
	fflush(stdout);
	for(int n=0 ;n<5;n++)
	{
		scanf("%s",p[n]);
		fflush(stdout);
	}
}
int main()
{
	int m=3;
	readline(m,p);
//	for(int m =0 ;i<5;i++)
	{
		printf("%s\n",p[m]);
		fflush(stdout);
	}
}


