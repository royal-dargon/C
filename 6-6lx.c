#include <stdio.h>
void alert(int n)
{
	int i=1;
	do {
		printf("\a");
		i=i+1;
	} while (i<n);
}
int main()
{
	int a;
	printf("响铃次数：");scanf("%d",&a);
	alert(a);
	return 0;
}

