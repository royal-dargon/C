#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void primeCycle(int n);
int canPlace(int j,int i,int n,int *p);
void showRes(int*p,int n);
int test(int n);

void main()
{
	int n;
	printf("please input a number:");
	scanf("%d",&n);
	primeCycle(n);
}
 
void primeCycle(int n)
{
	int* p;
	p = (int*)malloc(sizeof(int)*n);
	memset(p,0,sizeof(int)*n);
	p[0] = 1;
	int i = 1;
	int j;
	while(i >= 1)
	{
		for(j = p[i]+1;j <= n;j ++)
		{
			if(canPlace(j,i,n,p) == 1)
			{
				p[i] = j;
				break;
			}
		}
		if(j == n + 1)
		{
			p[i--] = 0;
		}
		else if(i == n-1)
		{
			showRes(p,n);
			p[i--] = 0;
		}
		else{
			i ++;
		}		
	}
	free(p);
	printf("finished\n");	
}

int canPlace(int j,int i,int n,int* p)
{
	int flag = 0;
	int m;
	for(m = 0;m < i;m ++)
	{
		flag = 0;
		if(p[m] == j)
		{
			return flag;
		}
		if(test(j+p[i-1]) != 1)
		{
			return flag;
		}
		if(i == n-1)
		{
			flag = test(j+p[0]);
			return flag;
		}
	}
	if(m == i)
	{
		flag = 1;
	}
	return flag;
}

void showRes(int *p,int n)
{
	int i;
	for(i = 0;i < n;i ++)
	{
		printf("%d ",p[i]);		
	}
	printf("\n");		
}

int test(int n)
{
	int flag = 1;
	int i;
	for(i = 2;i <= sqrt(n);i ++)
	{
		if(n % i == 0)
		{
			flag = 0;
			break;
		}		
	}
	return flag;	
} 
