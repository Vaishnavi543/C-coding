/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.23
//write a program to remove all comments from a C program .don't forget to handle quotd strings and character constants properly.C comment do not nest.

#include<stdio.h>
#include<string.h>
int main()

{
	char input[100];
	int c;
	int i=0 ;

	printf("enter a string :");
	fflush(stdout);
	while ((c=getchar())!='z')

	{
		 if(c=='//' || c=='*/' )
		 {
			 c==' ';
		 }
		 else
		 {
			 putchar(c);
		 	}
}
return 0;
}


