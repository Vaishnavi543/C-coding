/*
 * main.c
 *
 *  Created on: 18-Dec-2023
 *      Author: lenovo
 */
//1.13
//array which defines a length of the word


#include<stdio.h>
#include<string.h>
int main()

{
	char input[100];
	int c;
	int i=0 ;

	printf("enter a string:");
	fflush(stdout);
	while ((c=getchar())!='z')

	{
		 if(c!=' ')
		 {
			 input[i++]=c;
		 }
		 else
		 {
		 	input[i++]='\0';
		 	printf("%s | length of the word is: %d\n",input,strlen(input));
		 	fflush(stdout);
		 	i=0;
		 	}


	}



return 0;
}
