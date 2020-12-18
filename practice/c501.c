#include <stdio.h>
int main()
{
	int a,b,c;
	printf("实数a:");scanf("%d",&a);
	printf("实数b:");scanf("%d",&b);
	printf("实数c:");scanf("%d",&c);
	if ( (a+c)>b && (a+b)>c && (b+c)>a )
	{
		if ( a==b&&b==c )
			printf("1");
		else if ((a==b&&b!=c)||(b==c&&a!=b)||(a==c&&a!=b))
			printf("2");
		else
			printf("3");
	}
	else
		printf("0");
	return 0;
}
