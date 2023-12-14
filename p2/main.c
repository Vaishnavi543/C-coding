/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
//1.4
//celcius to fahrenheit table
int main()
{
    int cel,fah;
    int lower,upper,step;
    lower=-10;
    upper=40;
    step=5;
    cel=lower;
    printf("celcius to fahrenheit convertion table\n");
    while(cel<=upper)
    {
        fah=(cel*(9/5))+32;
        printf("%d\t%d\n",cel,fah);
        cel=cel+step;
    }
}


