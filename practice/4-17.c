#include <stdio.h>
int main()
{
	int i,j;
	int height,width;
	puts("让我们来画一个长方形。");
	printf("高：");scanf("%d",&height);
	printf("宽：");scanf("%d",&width);
	for (i=1;i<=height;i++) {
		for (j=1;j<=width;j++)
			putchar('*');
			putchar('\n');
	}
	return 0;
}
