/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.8
#include<stdio.h>
int  main ()
{
   int b,t,nl,c;
   b=t=nl=0;
   while ((c=getchar())!='z')
   {
    if(c=='\n')
    ++nl;
    if(c==' ')
    ++b;
    if(c=='\\t')
    ++t;

   }
   printf("%d %d %d\n",nl,b,t);
}



