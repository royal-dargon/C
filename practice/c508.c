#include <stdio.h>
void a(int v[],int n)
{
	int j,m;
	for ( j = 0;j<=n-1;j++);{
		for ( m = 0;m<=n-1;m++) {
			int temp;
			if(v[m]<v[m+1]) {
				temp=v[m];
				v[m]=v[m+1];
				v[m+1]=temp;
			}
		}
	}
}
int main()
{
	int b,j;
	double c=0;
	scanf("%d",&b);
	int p[b];
	for (j=0;j<=b-1;j++) {
		scanf("%d",&p[j]);
	}
	a(p,b);
	for (j=1;j<=b-2;j++) {
		c+=p[j];
	}
	printf("%f",c/(b-2));
	return 0;
}


