#include<stdio.h>
int main()
{
	int n;
	int i=0;
	puts("�����롣");
	scanf("%d",&n);
	while (1) {
		if (n == 1)
			break;
		else if (n%2==0) {
			n = n/2;
			i++;
		}
		else {
			n = 3*n+1;
			i++;
		}

	}
	printf("%d\n",i);
	return 0;
}
