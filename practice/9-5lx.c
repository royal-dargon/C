#include <stdio.h>
#define number 128
int str(const char s[],int c)
{
	int i=0;
	while(1) {
		if (s[i] == c)
			return i;
		if (s[i] == '\0') 
			return -1;
		i++;
	}
	
}
int main()
{
	char s[number];
	char p;
	int r;
	printf("请输入一段字符：");scanf("%s",s);
	getchar();
	printf("请输入字符:");scanf("%c",&p);
	r = str(s,p);
	printf("该段字符%c的下标是%d.\n",p,r);
	return 0;
}

