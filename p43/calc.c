/*
 * calc.c
 *
 *  Created on: 27-Dec-2023
 *      Author: lenovo
 */
#include<stdio.h>
int calc( int a ,char sign, int b)
{


	switch(sign)
	{
	case '+':
	{
		printf("%d %c %d = %d\n",a,sign,b,(a+b));
		break;
	}
	case '-':
		{
			printf("%d %c %d = %d\n",a,sign,b,(a-b));
			break;
		}
	case '*':
		{
			printf("%d %c %d = %d\n",a,sign,b,(a*b));
			break;
		}
	case '/':
		{
			printf("%d %c %d = %d\n",a,sign,b,(a/b));
			break;
		}
	case '%':
		{
			printf("%d %c %d = %d\n",a,sign,b,(a%b));
			break;
		}
	}
	return 0;

}


