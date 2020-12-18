#include <stdio.h>
void j(int n,int m,int *s,int *d)
{
	*s=m+n;
	*d=(m>n)?m-n:n-m;
}
int main()
{
	int a,b,c=0,v=0;
	printf("请输入两个整数\n");
	printf("整数a:");scanf("%d",&a);
	printf("整数b:");scanf("%d",&b);
       	j(a,b,&c,&v);
	printf("结果是%d%d\n",c,v);
	return 0;
}
