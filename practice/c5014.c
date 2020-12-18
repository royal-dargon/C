#include <stdio.h>
#define number 10000
void rank(int b[],int c)
{
	int d;
	for (d=0; d<c-1; d++) {
		if (b[d]>b[d+1]) {
			int temp;
			temp=b[d];
			b[d]=b[d+1];
			b[d+1]=temp;
		}
	}
}

int main()
{
	int n,i,t;
	int a[number];
	while (scanf("%d",&n)!=EOF) {
		if (n==0) {
			break;
		}
	for (i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	
	rank (a,n);
	for (i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	}
	return 0;
}
	
