#include <stdio.h>
int c(int n,int r)
{
	int g;
	if  ( r > 1&& (r < n ))
		g = c(n-1,r)+c(n-1,r-1);
		
	else if ((r==0)||(r==n))
	        g = 1;
	else if (r == 1)
	        g = n;
	return g;
	}
int main()
{
        int a,b;
	printf("请输入a,b");scanf("%d",&a);
	scanf("%d",&b);
	printf("结果是%d\n",c(a,b));
	return 0;
	}
		
