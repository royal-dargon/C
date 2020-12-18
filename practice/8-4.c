#include <stdio.h>
#define number 5
void b(int a[],int n)
{
	int i,j;
	for ( i = 0;i<=n-1;i++) {
		for ( j = 0;j<n-1;j++) {
			int temp;
			if ( a[j]<a[j+1]) {
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	int v[number];
	int i;
	printf("请输入%d人的身高。\n",number);
	for ( i = 0;i<=number-1;i++) {
		printf("%2d号 :",i+1);
		scanf("%d",&v[i]);
	}
	b (v,number);
	puts("降序排列");
	for (i = 0;i<=number-1;i++) {
		printf("%2d号:%d",i+1,v[i]);
	}
		return 0;
}
		

