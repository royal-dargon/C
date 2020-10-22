#include <stdio.h>
#define diff(x,y)((x)-(y))
int main()
{
	int a,b;
	printf("请输入a:");scanf("%d",&a);
	printf("请输入b:");scanf("%d",&b);
	printf("差是:%d\n",diff(a,b));
	return 0;
}
