#include <stdio.h>
int main()
{
	int a,b,c;
	printf("第一门");scanf("%d",&a);
	printf("第二门");scanf("%d",&b);
	if ( a>=60&&a<=100&&b<=100&&b>=60)
		c = 1;
	else if (( a<60||b<60)&&a>=0&&b>=0&&a<=100&&b<=100)
		c = 2;
	else
		c = 3;
	switch (c) {
		case 1  : puts("it is pass"); break;
		case 2  : puts("it is not pass"); break;
		case 3  : puts("it is error"); break;
	}

        return 0;
}	
