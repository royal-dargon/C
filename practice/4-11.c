#include <stdio.h>
int main()
{
	int i=0;
	int sum=0;
	int num,tmp;
	printf("输入多少个整数：");scanf("%d",&num);
	for (i=0;i<num;i++){
		printf("NO,%d:",i+1);
		scanf("%d",&tmp);
		sum+=tmp;
	}
	printf("合计值：%d\n",sum);
	printf("平均值：%d\n",sum/num);
	return 0;
}
