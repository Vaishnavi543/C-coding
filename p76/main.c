//write a program to sorting lines in increasing order.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp,*fq;
	char p[5][50];
	char q[15];
	char r[15];
	char k[30];
	int i=0,j=0;
	//int length1=0,length2=0;
	if((fp=fopen("main.txt","r"))==NULL)
	{
		printf("error in opening\n");
		fflush(stdout);
		exit(1);
	}
	if((fq=fopen("main.txt","r"))==NULL)
	{
		printf("error in opening\n");
		fflush(stdout);
		exit(1);
	}
	while(fgets(p,40,fp)!=NULL)
	{
		puts(p);
		for(i=0;p[i]!='\0';i++)
		{
			strcpy(r,p);
			for(j=0;k[j];j++)
			{
				strcpy(k,r);
			}
		}
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
	}
	fclose(fp);
	fclose(fq);
	return 0;
//system("time");

}





