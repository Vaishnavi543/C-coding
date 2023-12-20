/*
 * main.c
 *
 *  Created on: 20-Dec-2023
 *      Author: lenovo
 */
//2.7
//inverts function x with the n bits begin at position p inverted

#include<stdio.h>
unsigned int inverts(unsigned int x,int n,int p)
{
    return (x ^ (1<< (p + 1 +n)));
	//return(x|(y<<(p+1+n)));
}
int main(void)
{
    int x = 0xf0, n=3 , p=0;
    int z = inverts(x,n,p);
    printf("%x",z);

    return 0;
}

