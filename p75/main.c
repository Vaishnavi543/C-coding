//calculate word,characters and line of a file.
#include<stdio.h>
int main()
{
	FILE *fp;
	int ch,countchar=1,countword=1,countline=1,length=0;
	fp=fopen("main.txt","r");
	if(fp=fopen("main.txt","r")==NULL)
	{
		printf("file doesn't exist");
		fflush(stdout);
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
	//		printf("%c",ch);
	//		fflush(stdout);
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
