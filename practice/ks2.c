#include <stdio.h>
int mi(int a)
{
	int h;
	h=a*a*a;
}
int main()
{
	int i,j,k,z;
	printf("请输入一个三位数：");scanf("%d",&i);
	z=i%10;
	k=((i-z)/10)%10;
	j=(i-z-10*k)/100;
	if (i=mi(j)+mi(k)+mi(z))
		printf("是");
	return 0;
}
