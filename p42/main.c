/*
 * main.c
 *
 *  Created on: 26-Dec-2023
 *      Author: lenovo
 */
//4.2
//atof function
#include<stdio.h>
#include<string.h>
#include<math.h>
double atof(char* s)
{
	int i,j,n,length=0,a=0,b=0;
	double c,d;
	for(i=0;s[i]!='.';i++);
	length=i-1;
	for(j=0;j<=length;j++)
	{
		a=(a*10+s[j]-'0');
	}
	printf("%d\n ",a);

	for(i=(length+2),n=0;s[i]!='e';i++,n++)
	{
		b=(b*10+s[i]-'0');
	}
	c=b/pow(10,n);
	printf("%f\n",c);

	if(s[i+1]=='-')
	{
		d=((a+c)/(pow(10,s[i+2]-'0')));
	}
	else
	{
		d=((a+c)*(pow(10,s[i+2]-'0')));
	}
	return d;
}
int main()
{
	char s[]="123.45e-6";
	printf( "%lf",atof(s));
}


