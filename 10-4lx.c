#include <stdio.h>
void set_idx(int *v,int n)
{
	int i;
	for( i = 0;i < n;i++) {
		*(v+i) = i;
	}
}
int main()
{
	int a;
	int b;
	printf("输入整数a：");scanf("%d",&a);
	int p[a];
	set_idx( p,a );
	for ( b = 0;b < a;b++) {
		printf("p[%d] %d\n",b,p[b]);
	}
	return 0;
}
