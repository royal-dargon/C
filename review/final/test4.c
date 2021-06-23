#include <stdio.h>

void Way1();
void Way2();

void main()
{
	Way1();
	Way2();
}

void Way1()
{
	int n;
	int i,j;
	printf("please input a number:\n");
	scanf("%d",&n);
	for(i = 0;i < n-1;i ++)
	{
		for(j = n-1-i;j > 0;j --)
			printf(" ");
		printf("*");
		if(i == 0)
		{
			printf("\n");
			continue;
		}
		for(j = 0;j < 2*i-1;j ++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	if(i == n-1)
	{
		for(j = 0;j < 2*n-1;j ++)
			printf("*");
		printf("\n");
	}
	return;
}

void Way2()
{
	int i,j;
	int a,b,c;
	int k;
	int flag1 = 0, flag2 = 0;
	int x[7] = {1,3,5,1,2,2,2};
	int y[7] = {1,1,4,3,2,3,6};
	for(i = 0;i < 6;i ++)
	{
		for(j = i+1;j < 7;j ++)
		{
			flag1 = 0;
			flag2 = 0;
			a = y[j] - y[i];
			b = x[i] - x[j];
			c = x[i]*y[j]-x[j]*y[i];
			for(k = 0;k < 7;k ++)
			{
				if(k == i||k ==j)
					continue;
				if(a*x[k]+b*y[k]>c)
					flag1 = 1;
				if(a*x[k]+b*y[k]<c)
					flag2 = 1;	
			}
			if(flag1 == 1&& flag2 == 1)
			{
				continue;	
			}
			else
			{
				printf("%d--%d ",i+1,j+1);	
			}	
		}
	}
}
