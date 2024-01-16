//7.3
//minprintf
#include<stdio.h>
#include<stdarg.h>
void myprintf(char *fmt,...)
{
	va_list ap;
	char *p,*sval,*cval;
	int ival;
	double dval;
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
		case 'd':
			ival=va_arg(ap,int);
			printf("%d",ival);
			break;
		case 'f':
			dval=va_arg(ap,double);
			printf("%f",dval);
			break;
		case 's':
			for(sval=va_arg(ap,char *);*sval;sval++)
				putchar(*sval);
			break;
		case 'c':
			cval=va_arg(ap,char *);
						printf("%c",cval);
						break;
		default:
			putchar(*p);
			break;
		}
	}
	va_end(ap);
}
int main()
{
	myprintf("%d\n%f\n%c\n%s",10,10.5,'V',"hello hi");
}


