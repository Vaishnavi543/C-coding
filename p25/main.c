/*
 * main.c
 *
 *  Created on: 18-Dec-2023
 *      Author: lenovo
 */
//2.6
//setbits x with n bits begin at position p set to the rightmost n bits of y
#include<stdio.h>
unsigned int setbits(unsigned int x,int p,int n,int y)
{
	return(x|(y<<(p+1+n)));
}
int main()
{
    int x = 0xf0, n=2 ,y=1, p=0;
    int z = setbits(x,p,n,y);
    printf("%x",z);
}




