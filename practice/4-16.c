#include <stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=9;i++) {
		for (j=1;j<=9;j++) {
			int seki=i*j;
			if (seki>40)
				break;
			printf("%3d",seki);
		}
		putchar('\n');
			}
	return 0;
}
