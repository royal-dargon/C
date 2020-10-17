#include <stdio.h>
#define num 80
int main()
{
	int i,j;
	int n;
	int v[num];
	int bunpu[11]={0};
	printf("请输入学生的人数：");
	do {
		scanf("%d",&n);
		if (n<1 || n>num)
			printf("\a请输入1～%d的人数：",num);
	} while (n<1 || n>=num);
	printf("请输入%d人的分数\n",n);
	for (i=0;i<n;i++) {
		printf("%2d号",i+1);
		do {
			scanf("%d",&v[i]);
			if (v[i]<0 || v[i]>=100)
				printf("\a请输入1~100的数:");
		} while (v[i]<0 ||v[i]>=100);
		bunpu[v[i]/10]++;
	} 
	puts("\n--------------------------分布图-----------------");
	for (i=0;i<=9;i++) {
		printf("%3d",i*10);
		for (j=0;j<bunpu[i];j++) {
				putchar('*');
				}
				putchar('\n');
				}
				printf("  100:");
				for(j=0;j<bunpu[10];j++) {
				putchar('*');
				}
				return 0;
				}
