#include <stdio.h>
int main()
{
	int sum=0,cnt=0,retry;
	do {
		int t;
		printf("请输入一个整数：");
		scanf("%d",&t);
		sum=sum+t;
		cnt=cnt+1;
		printf("是否继续？<Yes...0/No...9>:");
		scanf("%d",&retry);
	} while (retry==0);
	printf("和为%d,平均值为%.2f。\n",sum, (double)sum/cnt);
	return 0;
}
