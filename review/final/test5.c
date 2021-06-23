#include <stdio.h>
#include <math.h> 
#include <string.h>

void Way1();

int Value[] = {6,3,5,4,6};
int Weight[] = {2,2,6,5,4};
int Submit[5] = {0};
int temp[5] = {0}; 

void main()
{
	int n,k;
	int i,Max = 0;
	int Sum;
	Way1();
	n = (int)pow(2,5);
	for(i = 0;i < n;i ++)
	{
		memset(Submit,0,sizeof(int)*5);
		int SumValue = 0;
		Sum = 0;
		int j = 0;
		int s = i;
		while(s>0)
		{
			Submit[j] = s % 2;
			s = s / 2;
			j ++;
		}
		for(k = 0;k < 5;k ++)
		{
			if(Submit[k] == 1)
			{
				Sum = Sum + Weight[k];
				SumValue += Value[k];
			}
		}
		if(Sum > 10)
			continue;
		if(SumValue > Max)
		{
			memcpy(temp,Submit,sizeof(int)*5);
			Max = SumValue;
		}
	}
	for(n = 0;n < 5;n ++)
	{
		printf("%d ",temp[n]);
	}
	printf("the max is %d \n",Max);
}

void Way1()
{
	int a[] = {1,3,5,7,9};
	int b[] = {2,4,6,8,10};
	int c[10] = {0};
	int num = 0;
	int i = 0;
	int j = 0;
	while(i<5&&j<5)
	{
		if(a[i] < b[j])
		{
			c[num] = a[i];
			i ++;
			num ++;
		}
		else
		{
			c[num] = b[j];
			j ++;
			num ++;
		}
	}
	while(i<5)
	{
		c[num] = a[i];
		num++;
		i++; 
	}
	while(j<5)
	{
		c[num] = b[j];
		j ++;
		num ++;
	}
	printf("after sort!\n");
	for(i = 0;i < 10;i ++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
}
