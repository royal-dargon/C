#include <stdio.h>
int main()
{
	float y;
	float x=0.0;
	int i;
	for(i=0;i<=100;i++) {
		printf("x=%f\tx=%f\n",x,i/100.0);
		x+=0.01;
	}
	return 0;
}

