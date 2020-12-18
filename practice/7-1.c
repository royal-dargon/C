#include <stdio.h>
#include <limits.h>
int main()
{
	puts("该环境下各字符型，整数数值的范围");
	printf("char  :%d~%d\n",CHAR_MIN ,CHAR_MAX);
	printf("signed char  :%d~%d\n",SCHAR_MIN,CHAR_MAX);
	printf("unsigned char :%d~%d\n",0,UCHAR_MAX);
	printf("short   :%d~%d\n",SHRT_MIN,SHRT_MAX);
	printf("int  :%d~%d\n",INT_MIN,INT_MAX);
	printf("long  :%d~%d\n",LONG_MIN,LONG_MAX);
	return 0;
}
