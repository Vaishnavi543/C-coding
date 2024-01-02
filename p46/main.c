/*
 * main.c
 *
 *  Created on: 29-Dec-2023
 *      Author: lenovo
 */
//4.13
//recursion function reverse(s) which reverse the string s in place
#include<stdio.h>

//char reverse(char* s)
//{
//	int j=0,i=0,length,temp=0;
//	for(i=0;s[i];i++);
//	length=i-1;
//	for(j=0,i=0;j<=(length/2);j++,i++)
//
//	{
//		temp=s[i];
//		s[i]=s[length-i];
//		s[length-i]=temp;
//		if (i==(length/2))
//		{
//
//			break;
//			s[i]='\0';
//		}
//
//	}
//
//}

char reverse(char* s)
{
	static int i=0;
	int j=0;
	int length;
	int temp=0;
	for(j=0;s[j];j++);
	length=j-1;

			temp=s[i];
			s[i]=s[length-i];
			s[length-i]=temp;
			if (i!=(length/2))
			{
			++i;
				reverse(s);
			}
			//s[i]='\0';


}

int main()
{
	char a[]="1234";
	//	char b[10];
	reverse(a);
	printf("%s",a);
}

