#include <stdio.h>
#include <math.h>

int Fibon(int n);
void try(int n);
void showResult();
int canPlace(int n,int i);

int Submit[8] = {0};

void main()
{
	int n,i;
	printf("please input a number:");
	scanf("%d",&n);
	for(i = 1;i <= n; i ++)
	{
		printf("%d ",Fibno(i));
	}
	printf("\n");
	try(0);
}

int Fibno(int n)
{
	if(n == 1 || n == 2)
		return 1;
	else
	{
		return Fibno(n-1)+Fibno(n-2);
	}
}

void try(int n)
{
	int i;
	for(i = 0;i < 8;i ++)
	{
		if(canPlace(n,i) == 1)
		{
			Submit[n] = i;
			if(n < 7)
			{
				try(n+1);	
			}
			else
			{
				showResult();
			}		
		}		
	} 
}

void showResult()
{
	int i;
	static int count = 1;
	printf("this is the %d way\n",count);
	count ++;
	if(count % 20 == 0)
	{
		getchar();
	}
	for(i = 0;i < 8;i ++)
	{
		printf("the line is %d,",i+1);
		printf("the list is %d.\n",Submit[i]+1);
	}
}

int canPlace(int n,int i)
{
	int j;
	int flag = 1;
	for(j = 0;j < n;j ++)
	{
		if(Submit[j] == i)
			flag = 0;
		if(abs(Submit[j]-i) == abs(n-j))
			flag = 0;
	}
	return flag;
}
