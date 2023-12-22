/*
 * main.c
 *
 *  Created on: 21-Dec-2023
 *      Author: lenovo
 */
//#include<stdio.h>
//int main()
//{
//	int c,i,nwhite,nother,ndigit[10];
//	nwhite=nother=0;
//	for(i=0;i<10;i++)
//		ndigit[i]=0;
//	while((c=getchar())!='z')
//	{
//		switch(c)
//		{
//		case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
//			ndigit[c-'0']++;
//			break;
//		case ' ':
//		case '\n':
//		case '\t':
//			nwhite++;
//			break;
//		default:
//			nother++;
//			break;
//		}
//	}
//	printf("digits=");
//	for(i=0;i<10;i++)
//		printf("%d",ndigit[i]);
//	printf(",white space=%d,other=%d\n",nwhite,nother);
//	return 0;
//
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//
//{
//	char input[100];
//	int c;
//	int i=0 ;
//
//	printf("enter a string:");
//	fflush(stdout);
//	while ((c=getchar())!='z')
//
//	{
//		 if(c=='\n' || c=='\t' )
//		 {
//			 c=='\b';
//		 }
//		 else
//		 {
//			 putchar(c);
//		 	}
//
//
//	}
//
//
//
//return 0;
//}


#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	//char s2[100];
	char c;
	//printf("enter a string:");
	//fflush(stdout);
//	scanf("%[^\n]",s1);
	fflush(stdout);
	//for (i=0;s1[i];i++)
		while((c=getchar())!='z')
		{
			switch(c)
			{
			case '\t' :
				printf("\\t",s1);
				break;

			case '\n' :
				printf("\\n",s1);
break;


			}
			putchar(c);
		}

	return 0;
}

































