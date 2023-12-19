/*
 * main.c
 *
 *  Created on: 19-Dec-2023
 *      Author: lenovo
 *
 */
//2.10
//write the function lower which converts upper case letter to lower case using conditional operation
#include <stdio.h>
int main()
{
	char str[100];
	char c;
	int i;
	printf("enter a string: ");
	fflush(stdout);
	scanf("%c",str);
	fflush(stdout);
	for(i=0;i!=' ';i++)
	str[i]=c;
	printf("entered string:%c | converted string:%c\n",str,(c>='A' && c<='Z' ? (c+'a'-'A') : c));
	fflush(stdout);
}

/*
for(i=0;i<lim-1 && (c=getchar())!='z' && c!='\n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;*/
