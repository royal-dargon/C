#include <stdio.h>
#include <math.h>

void Way1();
void Way2();
void Way3();

void main()
{
	//Way1();
	//Way2();
	Way3();
}

void Way1()
{
	int a,b,c;
	double x1,x2;
	printf("please input three numbers:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(b*b-4*a*c<0)
	{
		printf("the func do not have result!\n");
		return;
	}
	int temp = b*b-4*a*c;
	x1 = (-b+sqrt(temp))/2*a;
	x2 = (-b-sqrt(temp))/2*a;
	printf("x1 = %.3f, x2 = %.3f\n",x1,x2);
	return;
}

void Way2()
{
	int n;
	int a;
	printf("please input a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a = n % 10;
		printf("%d ",a);
		n = n / 10;
	}
	return;
}

void Way3()
{
	int a = 0x12345678;
	int m,n;
	scanf("%x",&a);
	m = a >> 24;
	n = a << 24;
	m = m + n;
	n = a >> 8;
	n = n&0x0000ff00;
	m = m + n;
	n = a << 8;
	n = n&0x00ff0000;
	m = m + n;
	printf("%#X",m);
	return;
}
