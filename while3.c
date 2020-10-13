#include <stdio.h>
int main()
{
	int no,i;
	printf("请输入一个整数：");scanf("%d",&no);
	i=0;
	while (i<=no)
	{ 
	 i=i+2;
	 if (i<=no)
		 printf("%d ",i);
	 else 
		 printf("\n");}

	printf("\n");
	return 0;
}
