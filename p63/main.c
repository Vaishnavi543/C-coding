//6.3
//remove noise words like 'the' 'and'.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="the x and y ";
	char b[20];
	char t[]="the";
	char e[]="and";
	int i,j=0,k;
	for(i=0;a[i];i++)
	{
		b[j]=a[i];
		j++;
		if(a[i]==' ')
		{
			b[j-1]='\0';
			if(strcmp(b,t)==0 || strcmp(b,e)==0)
			{
				for(k=0;a[k]!='\0';k++)
				{
					a[k]=a[i];
				i++;
				}
				j=0;
				i=0;
			}
		}
	}
	printf("%s",a);
}


