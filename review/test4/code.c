#include <stdio.h>

void draw(int n);

void main()
{
	int n;
	printf("please input a number:");
	scanf("%d",&n);
	draw(n);
}

void draw(int n)
{
	int i,j;
	for(i = 0;i < n-1;i ++)
	{
		for(j = 0;j < n-i-1;j ++)
		{
			printf(" ");
		}
		printf("*");
		for(j = 0;j < 2*i-1;j ++)
		{
			printf(" ");
		}
		if(i != 0)
		{
			printf("*");
		}
		printf("\n");
	}
	for(j = 0;j < 2*n-1;j ++)
	{
		printf("*");
	}
	printf("\n");
}
