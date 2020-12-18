#include <stdio.h>
#include <string.h>
#define NAME_LEM 64
struct student {
	char name[NAME_LEM];
	int height;
	float weight;
	long schols;
};
int main()
{
	struct student a;
	strcpy(a.name,"sa");
	a.height = 175;
	a.weight = 62.5;
	a.schols = 73000;
	printf("姓名= %s\n",a.name);
	printf("身高= %d\n",a.height);
	return 0;
}
