#include <math.h>
#include <stdio.h>
double dist(double x1,double y1,double x2,double y2)
{
	return sqrt((x2-x1) *(x2-x1)+(y1-y2)*(y1-y2));
}
int main()
{
	double x1,x2;
	double y1,y2;
	printf("求两点之间的距离。\n");
	printf("点1...x坐标");scanf("%lf",&x1);
	printf("点2...x坐标");scanf("%lf",&x2);
	printf("点1...y坐标");scanf("%lf",&y1);
	printf("点2...y坐标");scanf("%lf",&y2);
	printf("两点之间的距离是%f。\n",dist(x1,y1,x2,y2));
	return 0;
}


