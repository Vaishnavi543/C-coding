//write a program that converts upper case to lower or lower case to upper,depending on the name it is invoked with,as found in argv[0
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char s[]="ABCDxyz";
	char u[]="upper";
	char l[]="lower";
	int i;
	{
		if(strcmp(argv[1],u)==0)
		{
			for(i=0;s[i];i++)
			s[i]=toupper(s[i]);
		}
		if(strcmp(argv[1],l)==0)
				{
			for(i=0;s[i];i++)
						s[i]=tolower(s[i]);
				}

	}
	printf("%s\n",s);
}
