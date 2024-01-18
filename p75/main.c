//calculate word,characters and line of a file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int ch,countchar=1,countword=1,countline=1;
	if((fp=fopen("main1.txt","r"))==NULL)
	{
		printf("error in opening\n");
		fflush(stdout);
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		countchar++;

		if(ch==' ' || ch=='\n' )
		{
			countword++;
		}
		if(ch=='\n')
		{
			countline++;
		}
	}
	fclose(fp);
	printf("character count=%d\nword count=%d\nline count=%d",countchar,countword,countline);
	fflush(stdout);
	return 0;
}

//{
//			length=countword-length;
//			if(length<=countword)
//			{
//
//			}
//				countline++;
//			}
