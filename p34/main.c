/*
 * main.c
 *
 *  Created on: 22-Dec-2023
 *      Author: lenovo
 */
//3.6
//version of itoa
//converted numbers are padded with blanks on the left
#if 0
#include<stdio.h>
#include<string.h>
int main()
{
	int s=12345;
	char a1[10];
	char a2[10];
	int i=0;
	int j=0;
	int length;
	while(s!=0){
		a1[i]=s%10+'0';
		//	printf("%c",a1[i]);
		//	fflush(stdout);
		s=s/10;
		i++;
	}
	//	printf("length=%d",i);
	//	fflush(stdout);

	for(j=0;j<=i;i--){
		a2[j]=a1[i];
		printf("%c ",a2[j]);

	}

}
#endif

#if 1
//atoi
#include<stdio.h>
int main()
{
	char a[]="12345";
	int i=0,length=0,s=0,j,k=0;
	for(i=0;a[i];i++);
	length=i-1;
	for(j=0;j<=length;j++)
	{
		s=(s*10+a[j]-'0');
	}
	printf("%d",s);
}

#endif












