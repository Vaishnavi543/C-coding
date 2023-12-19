/*
 * main.c
 *
 *  Created on: 18-Dec-2023
 *      Author: lenovo
 */
//2.4
//write a alternate version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
#include<stdio.h>
#include<string.h>



int main()
{
	char s1[100] = "abcd efg";
	char s2[100]= "ab";
	//char s[100];
	int i,j ;
	//int k=0;
//	printf("string1 is :  ");
////	fflush(stdout);
//	scanf("%s",s1);
//	//fflush(stdout);
//
////	printf("string2 is : ");
//	//fflush(stdout);
//	scanf("%s",s2);
	//fflush(stdout);

	for (i=0;s1[i]!='\0';i++)
	{
		for (j=0;s2[j]!='\0';j++)
		{
			if (s1[i]!=s2[j])
			{

				printf("%c",s1[i]);
			}

			else
				{
				 break;
				}
				}

		}

	return 0;
	}


