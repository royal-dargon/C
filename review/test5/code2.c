#include <stdio.h>
#include <string.h>

int Weight[] = {2,2,6,5,4};
int Value[] = {6,3,5,4,6};

int Pow(int m,int n);

void main()
{
	int max = 0;
	int upper = Pow(2,5);
	int Submit[5];
	int Result[5];
	int i,j;
	for(i = 0;i < upper;i ++)
	{
		memset(Submit,0,5*sizeof(int));
		int s = i;
		int j = 0;
		int SumWeight = 0;
		int Sum = 0;
		while(s > 0)
		{
			Submit[j] = s % 2;
			j ++;
			s = s/2;
		}
		for(j = 0;j < 5;j ++)
		{
			if(Submit[j] == 1)
			{
				SumWeight += Weight[j];
				if(SumWeight <= 10)
				{
					Sum = Sum + Value[j];			
				}else{
					break;
				}		
			}
		}
		if(max < Sum)
		{
			memcpy(Result,Submit,sizeof(int)*5);
			max = Sum;	
		}	
	}
	for(i = 0;i < 5;i ++)
	{
		printf("%d ",Result[i]);	
	}
	printf("%d",max);	 
}

int Pow(int m,int n)
{
	int i;
	int res = 1;
	for(i = 0;i < n;i ++)
	{
		res = res * m;
	}
	return res;
}
