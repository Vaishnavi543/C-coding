/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
// 1.15 functions
//temp covertion table using function
// fahrenheit to celcius table

#include<stdio.h>
int conv(int fah)
{
	int cal;
	cal=(fah-32)*5/9;
	return cal;
}
int main()
{
	int fah,cal;
	int lower=0,upper=300;
	fah=lower;
	while(fah<=upper)
	{
		cal=conv(fah);
		printf("%d\t%d\n",fah,cal);
		fah=fah+20;
	}
}





