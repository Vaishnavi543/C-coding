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


//celcius to fahrenheit table

#include<stdio.h>

int fahrenheit (int cel)
{
   int fah;
   fah=(cel*(9/5))+32;
   return fah;
}
int main()
{
    int cel,fah,lower,upper,step;
    lower=(-10);
    upper=40;
	step=5;

    printf("celcius to fahrenheit convertion table\n");
    for(fah=upper;fah>=lower;fah=fah-step)
    {
       printf("%d\t%d\n",cel,fah);

       return 0;
    }
}





