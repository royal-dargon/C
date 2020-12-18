#include <stdio.h>
int sqr(int x)
{
	return x*x;
}
int sqr2(int x)
{
	return sqr(x)*sqr(x);
}
int main()
{
	int a;
	puts("请输入一个数。");
	printf("整数：");scanf("%d",&a);
	printf("结果是%d。\n",sqr2(a));
	return 0;
}
