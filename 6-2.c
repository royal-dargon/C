#include <stdio.h>
int max2(int a,int b,int c)
{
	int max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	return max;
}
int main()
{
	int a,b,c;
	puts("请输入三个整数。");
	printf("整数a:");scanf("%d",&a);
	printf("整数b:");scanf("%d",&b);
	printf("整数c:");scanf("%d",&c);
	printf("最大整数是%d。\n",max2(a,b,c));
	return 0;
}
