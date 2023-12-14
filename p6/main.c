/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.10
//write a program to copy its input to its output replacing each tab by \t each backspace by \b and each backslash by \\

#include<stdio.h>
int  main ()
{
   int c;
   while ((c=getchar())!='z')
   {
	   if(c=='\t')
   {
	   printf("\t");
   }
	   if(c=='\b')
	   {
		   printf("\b");
	   }
	   if(c=='\\')
			   {
					   printf("\\");
			   }
					   }
   {
   putchar(c);
   c=getchar();
 }
}

