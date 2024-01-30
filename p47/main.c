//find a number is palindrome or not by recursion function
#include<stdio.h>
#include<string.h>
int i=0;
int n=25652;
char a1[10];
int k=0;
void palindrome(int number)
{
	int s=n;
	a1[i]=number%10+'0';
	if(number!=0)
	{
		k=(k*10+a1[i]-'0');
		i++;
		palindrome(number/10);
	}
	else
	{
		a1[i]='\0';
		{
			if(s==k)
			{
				printf("%d is a palindrome number\n",s);
			}
			else
			{
				printf("%d is not a palindrome number\n",s);
			}
		}
	}
}
int main()
{
	palindrome(n);
}


