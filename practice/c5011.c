#include <stdio.h>
void rank(int a[],int n)
{
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			int temp;
			if (a[j]<a[j+1]) {
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	j = 0;
	}
}

int main()
{
	int p,m,k;
	scanf("%d %d",&p,&m);
	int c[p];
	for (k=0; k<p; k++) {
		scanf("%d",&c[k]);
	}
	rank(c,p);
	k = 0;
	for (k=0; k<m; k++) {
		printf("%d",c[k]);
	}
	return 0;
}
