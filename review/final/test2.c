#include <stdio.h>
#include <math.h>

void Way1(); 
void Way2();
void Way3();
void Way4()
{
	int x = 3,y = 2;
	float a = 2.5,b = 3.5;
	int res;
	res = (x+y)%3+(int)a/(int)b;
	printf("%d",res);
}

void main()
{
	//Way1();
	//Way2();
	//Way3();
	Way4();
}

void Way1()
{
	int n;
	int count = 0;
	printf("please input a number!\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n = n / 10;
		count ++;
	}
	printf("the count is %d\n",count);
	return;
}

void Way2()
{
	int n;
	int m;
	int i,temp,k;
	printf("please input a number\n");
	scanf("%d",&n);
	m = (int)pow(n,3);
	for(i = 2;;i ++)
	{
		if(m%i!=0)
			continue;
		else{
			temp = m/i;
			break;
		}
	}
	if(i%2==1)
	{
		int a = temp - i/2*2;
		for(k=0;k<i-1;k++)
		{
			printf("%d+",a);
			a = a + 2;
		}
		printf("%d",a);
	}
	if(i%2==0)
	{
		int a = temp - 1 - (i-1)/2*2;
		for(k=0;k<i-1;k++)
		{
			printf("%d+",a);
			a = a+2;
		}
		printf("%d",a);
	}
	return;
}

void Way3()
{
	int i,j;
	for(i = 0;i <= 20;i ++)
		for(j = 0;j < 34;j ++)
		{
			if(5*i+3*j<=100)
			{
				int m;
				m = 3*(100-5*i-3*j);
				if(i+j+m==100)
				{
					printf("5rmb is %d,3 rmb is %d,small is %d\n",i,j,m);	
				}	
			}
		}	
}	
