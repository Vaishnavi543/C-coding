/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.18 write a program to remove trailing blanks and tabs from each line of input and to delete entirely blanck lines.


#include<stdio.h>
#include<string.h>
int main()

{
	char input[100];
	int c;
	int i=0 ;

	printf("enter a string:");
	fflush(stdout);
	while ((c=getchar())!='z')

	{
		 if(c=='\n' || c=='\t' )
		 {
			 c=='\b';
		 }
		 else
		 {
			 putchar(c);
		 	}


	}



return 0;
}


