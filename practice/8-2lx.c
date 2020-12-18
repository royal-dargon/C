#include<stdio.h>
#define swap(int,a,b){ int x;x=a;a=b;b=x;}
int main()
{
	int a,b;
	int type=0;
	printf("请输入两个数。\n");
	printf("a是:");scanf("%d",&a);
	printf("b是:");scanf("%d",&b);
	swap(int,a,b);
	printf("交换过的结果是%d%d",a,b);
	return 0;
}
