/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.19 write a function reverse(s) that reverse the character string s.use it to write a program that reverses its input a line at a time.
#include<stdio.h>
#include<string.h>
int main()

{
	char input[100];
	char output[100];
	int c;
	int i=0 ;

	printf("enter a string:");

	fflush(stdout);

	while ((c=getchar())!='z')
	{
			input[i]=c;
			for(i=0;i<='/0';i++)
			printf("entered string : %c",input[i]);
			fflush(stdout);

		}
	for (i='\0';i>=0;i--)
	{
		printf("reverse string : %c",output[i]);
	}
	return 0;
}

