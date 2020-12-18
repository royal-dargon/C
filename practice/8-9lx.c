#include <stdio.h>
int main()
{
	int i;
	char ch[10000];
	int a=1;
	while (ch[i] = getchar())
	{
		if (ch[i]==EOF)
			break;
		if (ch[i] == '\n')
			a++;
		i++;
	}
	printf("\na=%d\n",a);
	return 0;
}
