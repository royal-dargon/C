#include <stdio.h>

void Way1(int a[],int b[],int c[]);

void main()
{
	int i;
	int a[5] = {1,3,5,7,9};
	int b[5] = {2,4,6,8,10};
	int c[10];
	Way1(a,b,c);
	for(i = 0;i < 10;i ++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
}

void Way1(int a[],int b[],int c[])
{
	int i = 0;
	int j = 0;
	int count = 0;
	while(i < 5 && j < 5)
	{
		if(a[i] < b[j])
		{
			c[count] = a[j];
			i ++;
			count ++;
			continue;
		}
		c[count] = b[j];
		j ++;
		count ++;
	}
	while(i < 5)
	{
		c[count] = a[i];
		i ++;
		count ++;
	}
	while(j < 5)
	{
		c[count] = b[j];
		j ++;
		count ++;
	}
}
