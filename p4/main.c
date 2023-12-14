/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.5 define
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main()
{
 printf("temperature convertion table\n");
{
    int fahrenheit;
    for(fahrenheit=UPPER;fahrenheit>=LOWER;fahrenheit=fahrenheit-STEP)
   {
    printf("%d \t %f\n",fahrenheit,(5.0/9.0)*(fahrenheit-32));
}
}
}


