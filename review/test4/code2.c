#include <stdio.h>

int x[] = {1,3,5,1,2,2,2};
int y[] = {1,1,4,3,2,3,6};

void main()
{
	int flag1 = 0,flag2 = 0;
	int i,j;
	int a,b,c;
	int m;
	for(i = 0;i < 6;i ++)
	{
		for(j = i+1;j < 7;j ++)
		{
			a = y[j]-y[i];
			b = x[i]-x[j];
			c = x[i]*y[j] - y[i]*x[j];
			flag1 = 0;
			flag2 = 0;
			for(m = 0;m < 7;m ++)
			{
				if(m == i||m ==j)
				{
					continue;
				}
				if(a*x[m]+b*y[m] > c)
				{
					flag1 = 1;
				}
				if(a*x[m]+b*y[m] < c)
				{
					flag2 = 1;
				}
				if(flag1 == 1&&flag2 == 1)
				{
					break;
				}
			}
			if(m == 7)
			{
				printf("(%d--%d)",i+1,j+1);
			}	
		}	
	}		
}
