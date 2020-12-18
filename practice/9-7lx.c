#include <stdio.h>
void string(const char s[],int n)
{
	int j=0;
	int i;
	for (i = 1;i<=n;i++) {
		while (s[j])
			putchar(s[j++]);
		j=0;
	}
}
int main()
{
	char j[128];
	int n;
	printf("输入一段字符串:");scanf("%s",j);
	getchar();
	printf("重复次数是:");scanf("%d",&n);
	string(j,n);
	printf("\n");
	return 0;
}
