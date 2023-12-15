/*
 * main.c
 *
 *  Created on: 14-Dec-2023
 *      Author: lenovo
 */
//1.18 write a program to remove trailing blanks and tabs from each line of input and to delete entirely blanck lines.
#include<stdio.h>
#define MAXLINE 1000
int gl(char line[],int maxline);
void copy (char to[],char from[]);
//print longet input line
int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max=0;
	while((len=gl(line,MAXLINE))>0)
		if(len>max){
			max=len;
			copy(longest,line);
		}
	if(max>0)
		printf("%s",longest);
	return 0;
}
//getline:read a line into s,return length
int gl(char s[],int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!='z' && c!='\n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
//copy from into to
void copy(char to[],char from[])
{
	int i;
	i=0;
	while((to[i]=from[i])!='\0')
		++i;
}


