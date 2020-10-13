#include <stdio.h>
int main()
{
	int no;
	printf("请输入一个整数：");scanf("%d",&no);
	while (no>=0)
		printf("%d",no--);
	return 0;
}

