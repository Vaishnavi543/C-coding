//7.3
//minprintf
#include<stdio.h>
#include<stdarg.h>
void myprintf(char *fmt,...)
{
	va_list ap;
	char *p,*sval,*cval;
	int ival,count=0;
	double dval;
	va_start(ap,fmt);
	for(p=fmt;*p;p++)
	{
		if(*p!='%')
		{
			count++;
			putchar(*p);
			continue;
		}
		switch(*++p)
		{
		case 'd':
			ival=va_arg(ap,int);
			count++;
			printf("%d",ival);
			break;
		case 'f':
			dval=va_arg(ap,double);
			printf("%f",dval);
			count++;
			break;
		case 's':
			for(sval=va_arg(ap,char *);*sval;sval++)
			{
				count++;
				putchar(*sval);
			}
			break;
		case 'c':
			cval=va_arg(ap,char *);
			printf("%c",cval);
			count++;
			break;
		default:
			count++;
			putchar(*p);
			break;
		}

	}
	printf("count=%d",count);
	va_end(ap);
}
int main()
{
	myprintf("%d\n%f\n%c\n%s\n",10,10.5,'V',"hello");
}


