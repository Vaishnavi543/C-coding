/*
 * main.c
 *
 *  Created on: 28-Dec-2023
 *      Author: lenovo
 */
//4.5
//read word from string and then use math.h library for power function
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,x=0,y=0;
			float z;
	char a[]="pow(5,2)";
	char b[10];
	char c[10];
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]=='p') && (a[i+1]=='o') && (a[i+2]=='w'))
		{

			for(j=i+4;a[j]!=',';j++)
			{
				b[j]=a[j];
				if(b[j]!='\0')
				x=x*10+(b[j]-'0');
				//printf("%d\n",x);
			}
            for(k=j+1;a[k]!=')';k++)
            {
            	c[k]=a[k];
            	if(c[k]!='\0')
            	y=y*10+(c[k]-'0');
            	//printf("%d\n",y);
            }

		}

	}
	z=pow(x,y);
	printf("%s = %f",a,z);
}


