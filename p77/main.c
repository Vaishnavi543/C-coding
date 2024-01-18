//7.6
//write a program to compare two files,printing the first line where they differ.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *ax,*by;
	char a[15];
	char b[15];
	if((ax=fopen("x.txt","r"))==NULL)
	{
		printf("error in opening\n");
		fflush(stdout);
		exit(1);
	}
	if((by=fopen("y.txt","r"))==NULL)
	{
		printf("error in opening\n");
		fflush(stdout);
		exit(1);
	}
	while(1)
	{
		int s1=fgets(a,40,ax)!=NULL;
		int s2=fgets(b,40,by)!=NULL;
		{
			if(s1==EOF || s2==EOF)
			{
				break;
			}
			if(0 != strcmp(a,b))
			{
				printf("unmatched string:");
				puts(a);
				break;
			}
		}
	}

}


//while(fgets(p,40,fp)!=NULL)
//	{
//		while(fgets(q,40,fq)!=NULL)
//		{
////			length1=strlen(p);
////			length2=strlen(q);
//			if(strlen(p)<=strlen(q))
//			{
//				strcpy(r,p);
//			}
//			}
//		printf("%s\n",r);
//					fflush(stdout);
//	}
//	fclose(fp);
//	fclose(fq);
//	return 0;
//}

//while(fgets(a,40,ax)!=NULL)
//	{
//		while(fgets(b,40,by)!=NULL)
//		{
//			if(0 != strcmp(a,b))
//			{
//				printf("unmatched string:");
//				puts(a);
//				break;
//			}
//break;
//		}
