//6.4
//write a program that prints the distinct words in its input sorted into decreasing order of frequency of occurrence.precede each word by its count.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]={"abc xyz pqr abc pqr xyz abc xyz omn "};
	char b[5];
	char c[5];
	int count=1,i,j=0,k=0,l,m=0;
	for(i=0;a[i];i++)
	{
		b[j]=a[i];
		j++;
		if(a[i]==' ')
		{
			int length=j-1;
			{
				for(j=i+1;a[j];j++)
				{
					c[k]=a[j];
					k++;
					if(a[j]==' ')
					{
						if(0==strncmp(c,b,length))
						{
							count++;
							m=j-length;
							for(l=j-length;a[l];l++,j++)
							{
								a[l-1]=a[j];
							}
							j=m-1;
						}
						k=0;
					}
				}
				printf("%s count=%d\n",b,count);
				fflush(stdout);
				j=0;
				count=1;
			}
		}
	}
}



