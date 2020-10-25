#include <stdio.h>
int main()
{
	int i,j;
	for ( i = 1; i<=3; i++) {
		for ( j = 1; j<=i ;j++)
			putchar(' ');
		for ( j = 1; j<=(7-2*i);j++)
			putchar('*');
		putchar('\n');
        }
	for ( i = 5; i>=4;i--) {
		for ( j = 1;j<=(i-3);j++)
			putchar(' ');
		for ( j = 1;j<=(13-2*i);j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}


