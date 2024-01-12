//write a program that will print arbitrary input in a sensible way.as a minimum, it should print nongraphic characters in octal or hexadecimal according to local custom,and break long text lines.
#include<stdio.h>
int main()
{
	{
		//char input[100];
		int c;
		//int i=0 ;
		printf("enter a string:");
		fflush(stdout);
		while ((c=getchar())!='z')
		{
			 if(c=='\t' || c=='\n' )
			 {
				 printf(" 0x%x ",c);
			 }
			 else
			 {
				 putchar(c);
			 }
		}
		return 0;
	}


}

