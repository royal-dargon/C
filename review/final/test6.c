#include <stdio.h>

void main()
{
	int n[10];
	int i,j;
	int upper = 9;
	printf("please input ten numbers\n");
	for(i = 0;i < 10;i ++)
	{
		scanf("%d",&n[i]);
	}
	for(i = 0;i < 9;i ++)
	{
		int temp;
		int flag = 0;
		int s = upper;
		for(j = 0;j < upper;j ++)
		{
			if(n[j]%2==0&&n[j+1]%2==1)
			{
				temp = n[j+1];
				n[j+1] = n[j];
				n[j] = temp;
				flag = 1;
				s = j;
			}
			if((n[j]%2==0&&n[j+1]%2==0)||(n[j]%2==1&&n[j+1]%2==1))
			{
				if(n[j]>n[j+1])
				{
					temp = n[j+1];
					n[j+1] = n[j];
					n[j] = temp;
					flag = 1;
					s = j;
				}
			}
		}
		upper = s;
		if(flag == 0)
		{
			break;
		}
	}
	for(i = 0;i < 10;i ++)
	{
		printf("%d ",n[i]);
	}
}
