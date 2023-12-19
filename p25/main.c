/*
 * main.c
 *
 *  Created on: 18-Dec-2023
 *      Author: lenovo
 */
//#include<stdio.h>
//unsigned int getbits(unsigned int x, int p, int n) {
//    return (x >> (p + 1 - n)) & ~(~0 << n);
//}
//int main(void)
//{
//    int x = 0xF994, p = 4, n = 3;
//    int z = getbits(x, p, n);
//    printf("getbits(%u (%x), %d, %d) = %u (%X)\n", x, x, p, n, z, z);
//
//    return 0;
//}
//
#include <stdio.h>

int x = 0;
int f1()
{
    x = 5;
    return x;
}
int f2()
{
    x = 10;
    return x;
}
int main()
{
    int p = f1() + f2();
    printf(".....");
    printf("%d ", p);
    return 0;
}
