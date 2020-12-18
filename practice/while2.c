#include <stdio.h>
int main()
{
	int i,no;
	printf("请输入一个整数：");
	scanf("%d",&no);
	i=0;
	while (i<=no)
		printf("%d ",i++);
	printf("\n");
	return 0;
}
