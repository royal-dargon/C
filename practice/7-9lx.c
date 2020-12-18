#include <math.h>
#include <stdio.h>
double mj(double i)
{
	return sqrt(i);
}
int main()
{
	double i;
	printf("请输入面积。");
	printf("面积是:");scanf("%lf",&i);
	printf("边长是%f。\n",mj(i));
	return 0;
}
