/*
 * main.c
 *
 *  Created on: 09-Jan-2024
 *      Author: lenovo
 */
//write a program that reads a c program and prints in alphabetical order each group of variable names
//that are identical in first 6 characters but different somewhere thereafter.make 6 a parameter that
//can be set from the command line.
#if 1
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
	//	printf("%d %c",b.i,b.c);
	//		fflush(stdout);
}
#endif

#if 0
#include<stdio.h>
#include<string.h>
int main()
{
	int i,x,k,j,m;
	char c[]="insert";
	char s[]="insertoff inout inserton ";
	char s2[7];
	char a[20];
	for(i=0,j=i;s[i];i++,j++)
	{
		a[m]=s[i];
		m++;
		if(s[i]==' ')
		{
			a[m-1]='\0';
			for(j=0;j<6;j++)
			{
				s2[j]=s[j];
			}
			s2[j]='\0';
			x=strcmp(s2,c);
			if(x==0)
			{
				printf("%s",a);

			}
			m=0;
		}

	}

}
#endif
//"insertinclude inout inserton"
