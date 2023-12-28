/*
 * mystrncpy.c
 *
 *  Created on: 28-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
char mystrncpy(char* s1,char* s2,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
	  s2[i]=s1[i];
  }
  s2[i]='\0';
  return s2[i];
}


