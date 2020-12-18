#include <stdio.h>
int main()
{
	int i;
	int num;
	int l;
	int o;
	int v;
	int e;
	printf("请输入一个整数：");scanf("%d",&num);
	if (num<=9)
	{
		for (i=0;i<num;i++)
			printf("%d",i+1);
	}
	else {
		l=num/10;
		o=num%10;
		for (v=0;v<l;v++)
			printf("1234567890");
		for (e=0;e<o;e++)
			printf("%d",e+1);
	}
	printf("\n");
	return 0;
}
