/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
//5.9
//rewrite day of year function using pointer instead of arrays
#include<stdio.h>
static char *daytab={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
int dayofyear(int y,int m,int d)
{
	int i,leap;
	leap=((y%4==0 && y%100!=0)|| (y%400==0));
	for(i=1;i<=m;i++)
		d=daytab[leap][i];
	return d;
}
int main()
{
	int year=4000,month=13,day;
	if(month>12)
		{
			printf("invalid month\n");
		}
	else{
	printf("%d | %d |",year,month);
	int d=dayofyear(year,month,day);
printf(" %d",d);
}
}

