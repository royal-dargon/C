#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i;
	int j;
	int t;
	int a[101];
	printf("n是:");
	while(scanf("%d",&n)!=EOF) {
		if (n==0) {
			break;
		}
		for(i=0;i<n;i++) {
			scanf("%d ",&a[i]);
		}
		for (i=0;i<n-1;i++) {
			for (j=i+1;j<n;j++) {
				if(fabs(a[i])<fabs(a[j])) {
					t =a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		for (i=0;i<n-1;i++) {
			printf("%d ",a[i]);
		}
	}

	return 0;
}


