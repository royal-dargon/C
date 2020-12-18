#include <stdio.h>
#define number 100000
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	int A[number];
	int B[number];
	int C[number];
	for (i=0; i<n;i++) {
		scanf("%d %d %d",&A[i],&B[i],&C[i]);
	}
        for (i=0; i<n; i++) {
		if (A[i]+B[i]>C[i]) {
			printf("Case #%d: true\n",i);
		}
		else {
			printf("Case #%d: false\n",i);
		}
	}
	return 0;
}


