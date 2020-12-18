#include <stdio.h>
int sump (int n)
{
	int sum=0;
	int i;
	for (i=1;i<=n;i++)
		sum+=i;
	return sum;
}
int main()
{
	int n;
	puts("请输入一个整数");
	printf("整数是:");scanf("%d",&n);
	printf("结果是%d",sump(n));
	return 0;
}
