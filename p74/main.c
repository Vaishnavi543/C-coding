//7.4
//private version of scanf analogous to minprintf from the previous section
#include<stdio.h>
#include<stdarg.h>
#include<ctype.h>
#include<conio.h>
void myscanf(char *fmt,...)
{
	va_list ap;
	char *p,*sval,*cval;
	//	int *ival;
	//	double *dval;
	va_start(ap,fmt);
	for(p=fmt;*p;p++)
	{
		if(*p!='%')
		{
			putchar(*p);
			continue;
		}
		switch(*++p)
		{
		//		case 'd':
		//			ival=va_arg(ap,int*);
		//			*ival = getint(" ");
		//
		//			break;
		//		case 'f':
		//			dval=va_arg(ap,double*);
		//			*dval = getfloat(" ");
		//
		//			break;
		case 's':
			sval=va_arg(ap,char *);
			gets(sval);
			break;
		case 'c':
			cval=va_arg(ap,char *);
			*cval = getchar();
			break;
		}
	}
	va_end(ap);
}
int main()
{
	//	int a=10;
	//	float b=10.5;
	char c[20];
	char d[0];
	myscanf("%s %c",c,d);
	printf("%s",c);
	fflush(stdout);
}


