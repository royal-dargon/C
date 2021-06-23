#include <stdio.h>
#include <string.h>

int try(int sumWeight,int i);

int Weight[] = {2,2,6,5,4};
int Value[] = {6,3,5,4,6};
int Submit[5] = {0};

void main()
{
	int res;
	int i;
	res = try(10,0);
	for(i = 0;i < 5;i++)
	{
		printf("%d ",Submit[i]);
	}
	printf("the max value is %d ",res);
}

int try(int sumWeight,int i)
{
	int res1;
	int res2;
	if(sumWeight <= 0 || i >= 5)
	{
		return 0;	
	}
	if(Weight[i] > sumWeight)
	{
		return try(sumWeight,i+1);	
	}
	else
	{
		res1 = try(sumWeight,i+1);
		res2 = try(sumWeight-Weight[i],i+1)+Value[i];
		if(res1 > res2)
		{
			Submit[i] = 0;
			return res1;
		}
		else 
		{
			Submit[i] = 1;
			return res2;
		}
	} 
}
