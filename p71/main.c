//write a program that converts upper case to lower or lower case to upper,depending on the name it is invoked with,as found in argv[0
#include<stdio.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
	char s[]="ABCDxyz";
	int i;
	{
		if(argv[1] == "upper")
		{
			for(i=0;s[i];i++)
			s[i]=toupper(s[i]);
		}
		if(argv[1] == "lower")
				{
			for(i=0;s[i];i++)
						s[i]=tolower(s[i]);
				}

	}
	printf("%s\n",s);
	printf("%s",argv[1]);
}
