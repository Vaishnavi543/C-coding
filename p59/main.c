/*
 * main.c
 *
 *  Created on: 04-Jan-2024
 *      Author: lenovo
 */
//5.10
//reverse polish method
//2 3 4 + *
//#include<stdio.h>
//int main(int argc,char const *argv[])
//{
//	printf("the value of argc is %d\n",argc);
//	for(int i=0;i<argc;i++)
//		printf("this argument at index number %d has a value of %s\n",i,argv[i]);
//}
#include<stdio.h>
#include "calc.h"
int main()
{
	char r[]="2 3 4 + *";
	char d[10];
	char s[10];
	int i,j=0,k=0,x,y,z,v,w;
	for(i=0;r[i];i++,k++)
	{
		if((r[i]>='0' && r[i]<='9') || r[i]==' ')
		{
			d[k]=r[i];
			//int p=r[i]-'0';

		}

		else
		{
			d[k]='\0';
			//printf("%s\n",d);
						fflush(stdout);
			break;
		}

	}
	for(j=0;r[i];j++,i++)
	{
		if((r[i]=='+') || (r[i]=='-') || (r[i]=='*') || (r[i]=='/') || (r[i]==' ') )
		{
			s[j]=r[i];
		}
		else
		{
			s[j]='\0';
			break;
		}
	}
	for(k=0;d[k];k++);
	int length1=k-1;
	for(k=length1;k>=0;k--)
	{
		if(d[k]!=' ')
		{
			x=d[k]-'0';
			y=d[k-2]-'0';
			z=d[k-4]-'0';
			break;
		}
	}
	for(j=0;s[j];j++)
	{
		if(s[j]!=' ')
		{
			v=calc( x,s[j], y);
			//printf("%d",v);
			//scanf("%d",&v);
			w=calc( v,s[j+2],z);
			//printf("%d",w);
			//scanf("%d",&w);
			break;
		}
	}

}






