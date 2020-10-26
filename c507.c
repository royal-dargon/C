#include <stdio.h>
int main()
{
	int n,i;
	int j = 1;
	printf("请输入n:");scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if ( a[i]%2==1 )
			j*=a[i];
	} 
	printf("结果是%d\n",j);
	return 0;
}


