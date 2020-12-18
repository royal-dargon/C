#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[n][m];
	int b[n];
	int i,j;
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf("%d",&a[i][j]);
		}
		j = 0;
	}
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			b[i] += a[j][i];
		}
		j = 0;
		printf("%d\t",b[i]/m);
	}
	return 0;
}


