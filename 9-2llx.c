#include <stdio.h>
int main()
{
	char s[] = "ABC";
	int i;
	for ( i = 0;i < 4;i++) {
		s[i] = '\0';
	}
	printf("string=%s\n",s);
	return 0;
}
