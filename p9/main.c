/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
// 1.15 functions
//temp covertion table using function


/*#include<stdio.h>
int power(int m,int n);
main()
{
	int i;
for(i=0;i<10;i++)
printf("%d %d %d \n",i,power(2,i),power(-3,i));
return 0;
}



int power(int base,int n)
{
	int p;

	for(p=1;n>0;--n)
	p=p*base;
return p;
}*/


// fahrenheit to celcius table

#include<stdio.h>
int conv(int);
int main()
{
int fah,cal;
int lower=0,upper=300;
fah=lower;
while(fah<=upper){
	cal=conv(fah);
	printf("%d\t%d\n",fah,cal);
	fah=fah+20;
}
return 0;
}
int conv(int fah)
{
	int cal;
	cal=(fah-32)*5/9;
	return cal;
}




