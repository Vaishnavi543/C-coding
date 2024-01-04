/*
 * main.c
 *
 *  Created on: 03-Jan-2024
 *      Author: lenovo
 */
//5.8
//day of year
#include<stdio.h>
static char daytab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
#if 0
int dayofyear(int y,int m,int d)
{
	int i,leap;
	leap=((y%4==0 && y%100!=0)|| (y%400==0));
	for(i=1;i<m;i++)
		d+=daytab[leap][i];
	if(m>12)
			{
				return -1;
			}
	return d;
}
int main()
{
	int d,year,month,day,x;
	printf("year=");
	fflush(stdout);
	scanf("%d",&year);
	fflush(stdout);
	printf("month=");
		fflush(stdout);
		scanf("%d",&month);
		fflush(stdout);
		printf("day=");
			fflush(stdout);
			scanf("%d",&day);
			fflush(stdout);
	x=dayofyear(year,month,day);
	printf("%d | %d |%d",year,month,x);
}
#endif

#if 1
//month day
int monthday(int year,int month,int day)
{
	int leap;
	leap=((year%4==0 && year%100!=0)|| (year%400==0));
	if(leap)
	{
		 return daytab[1][month];

	}
	else
	{
		return daytab[0][month];
	}
}
int main()
{
	int y,m,d,x;
	printf("y=");
		fflush(stdout);
		scanf("%d",&y);
		fflush(stdout);
		printf("m=");
			fflush(stdout);
			scanf("%d",&m);
			fflush(stdout);
			printf("d=");
				fflush(stdout);
				scanf("%d",&d);
				fflush(stdout);
	x=monthday(y,m,d);
	if(d!=x)
		printf("invalid month day.");

}
#endif



