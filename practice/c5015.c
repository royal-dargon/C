#include <stdio.h>
#define number 10000
int main()
{
	int a[number];
	int n,i;
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for (i=0; i<n; i++) {
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}
