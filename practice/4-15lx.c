#include <stdio.h>
int main()
{
	int a;int b;int c;
	printf("开始数值：");scanf("%d",&a);
	printf("结束数值：");scanf("%d",&b);
	printf("间隔数值:");scanf("%d",&c);
	for (a=a;a<=b;a+=c)
	{
		printf("%dcm  %.2fkg\n",a,(a-80)*0.7);
	} printf("\n");
	return 0;
}
