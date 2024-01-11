/*
 * main.c
 *
 *  Created on: 09-Jan-2024
 *      Author: lenovo
 */
//6.2
//write a program that reads a c program and prints in alphabetical order each group of variable names
//that are identical in first 6 characters but different somewhere thereafter.make 6 a parameter that
//can be set from the command line.
#if 0
//char t[6];
//	{
//		for(j=0,i=0;s[i][j];j++)
//		{
//			if(s[i][j]==' ')
//			{
//				for(p=0,k=0;p<=6;p++,k++)
//				{
//					t[k]=s[i][j+1];
//					j++;
//				}
//
//				if(strncmp(t,c,6)==0)
//				{
//					bootlo++;
//				}
//
//				i++;
//				j=0;
//			}
//
//		}
//		printf("bootlo=%d\n",bootlo);
//	}
//}
#include<stdio.h>
struct linked{
	int i;
	char c;
	struct linked *p;
}a,b,c,d,e;
int main()
{
	//struct linked a,b,c,d,e;
	void *ptr;
	ptr++;
	ptr=NULL;
	a.i=1;
	a.c='a';
	a.p=&b;
	b.i=2;
	b.c='b';
	b.p=&c;
	c.i=3;
	c.c='c';
	c.p=&d;
	d.i=4;
	d.c='d';
	d.p=&e;
	e.i=5;
	e.c='e';
	e.p=NULL;
	printf("%d %c\n",a.i,a.c);
	fflush(stdout);
}
#endif
//strncmp(string1,string2,number of elements to compare)
#if 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,x;
	int count=1;
	char s[][25]={"void bootloader_rollback ",
			"int bootloader",
			"int variable",
			"int bootloader_reset",
			"int variable_update",
	};
	char t[7];
	{
		for(j=0,i=0;s[i][j];j++)
			if(s[i][j]==' ')
			{
				for(k=0;k<6;k++)
				{
					t[k]=s[i][j+1];
					j++;
				}
				t[k]='\0';
				strcpy(s[i],t);
				i++;
				j=0;
			}
	}
	int length = 4;
	for(int p=0;p<=length;p++)
	{
		for(j=p+1;j<=length;j++)
		{
			x=strcmp(s[p],s[j]);
			if(x==0)
			{
				count++;
				for(int k=j;k<length;k++)
				{
					strcpy(s[k],s[k+1]);

				}
				length--;
				j--;
			}
		}
		printf("%s - %d\n",s[p],count);
		//fflush(stdout);
		count = 1;
	}

	fflush(stdout);
}
#endif
