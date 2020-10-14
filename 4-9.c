#include <stdio.h>
int main()
{
	int i=0;
	int sum=0;
	int num,tmp;
	printf("要输入多少个整数：");scanf("%d",&num);
	while (i<num) {
		printf("No.%d:", ++i);
		scanf("%d",&tmp);
		sum +=tmp;
	}
	printf("合计值：%d\n",sum);
	printf("平均值：%d\n",sum/num);
	return 0;
}
