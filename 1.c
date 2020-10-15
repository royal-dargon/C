#include <stdio.h>
int main()
{
	int a,i;
	printf("请输入一个整数：");
	scanf("%d",&a);
	for (i=1;i<=a;i+=2)
		printf("%d",i);
	putchar('\n');
	return 0;
}
