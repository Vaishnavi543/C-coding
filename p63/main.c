//6.3
//remove noise words like 'the' 'and'.
#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="the x and y ";
	char b[20];
	char t[]="the";
	char a[]="and";
	int i,j=0,k;
	for(i=0;s[i];i++)
	{
		b[j]=s[i];
		j++;
		if(s[i]==' ')
		{
			b[j-1]='\0';
			if(strcmp(b,t)==0 || strcmp(b,a)==0)
			{
				for(k=i-j;s[k]!='\0';k++)
				{
					s[k]=s[i];
				i++;
				}
				i=0;
				j=0;
			}

		}
	}
	printf("%s",s);
}


