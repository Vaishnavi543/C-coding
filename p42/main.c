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
	char e;

	for(i=0;s[i]!='.';i++);
	length=i-1;
	//printf("%d\n ",length);
	//fflush(stdout);


	for(j=0;j<=length;j++)
	{
		a=(a*10+s[j]-'0');
	}
	printf("%d\n ",a);

	for(i=(length+2),n=0;s[i]!='e';i++,n++)
	{
		b=(b*10+s[i]-'0');
	}
	//			printf("%d\n",b);
	//			fflush(stdout);
	c=b/pow(10,n);
	printf("%f\n",c);

//	int exponent_value = d=(a+c)/pow(10,s[i+2]);
//	{
//		d=(a+c)/pow(10,s[i+2]);
//	}
//	printf("%c\n",s[i+2]);
//			fflush(stdout);

	if(s[i+1]=='-')
	{
//		printf("%lf",d=(a+c)/pow(10,s[i+2]));
//		fflush(stdout);
//		scanf("%lf",&d);
//		fflush(stdout);
	 d=((a+c)/(pow(10,s[i+2])));
	}
	else
	{
//		printf("%lf",d=(a+c)*pow(10,s[i+2]));
//		fflush(stdout);
//		scanf("%lf",&d);
//		fflush(stdout);
	 d=((a+c)*(pow(10,s[i+2])));
	}

	return d;
}
int main()
{
	char s[]="123.45e+2";
	printf( "%lf",atof(s));
}


