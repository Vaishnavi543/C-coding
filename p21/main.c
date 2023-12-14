/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//program to detect the ranges
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main()
{
   printf("min signed char %d\n",SCHAR_MIN);
   printf("max signed char %d\n",SCHAR_MAX);

   printf("min signed short %d\n",SHRT_MIN);
   printf("max signed short %d\n",SHRT_MAX);

   printf("min signed int  %d\n",INT_MIN);
   printf("max signed int  %d\n",INT_MAX);

   printf("min signed long %d\n",LONG_MIN);
   printf("max signed long %d\n",LONG_MAX);

   printf("max unsigned char %d\n",UCHAR_MAX);
   printf("max unsigned short %d\n",USHRT_MAX);
   printf("max unsigned int %d\n",UINT_MAX);
   printf("max unsigned long %d\n",ULONG_MAX);

   printf("min unsigned char %d\n",UCHAR_MIN);

}

