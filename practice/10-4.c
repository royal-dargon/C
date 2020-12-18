#include<stdio.h>
void hiroko(int *h)
{
	if(*h<180)
		*h=180;
}
int main()
{
	int s=178;
	int n=175;
	int a=179;
   	hiroko(&s);
	printf("s的身高是%d\n",s);
	printf("n的身高是%d\n",n);
	printf("a的身高是%d\n",a);
	return 0;
}
