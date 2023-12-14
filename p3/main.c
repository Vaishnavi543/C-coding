/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.5
#include<stdio.h>
int main()
{
 printf("temperature convertion table\n");
{
    int fahrenheit;
    for(fahrenheit=300;fahrenheit>=0;fahrenheit=fahrenheit-20)
   {
    printf("%d \t %f\n",fahrenheit,(5.0/9.0)*(fahrenheit-32));
}
}
}


