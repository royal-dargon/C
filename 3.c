#include <stdio.h>
int main()
{ 
	int hand;
	do {
		printf("请选择出什拳【0..石头/1...剪刀/2...布】:");
		scanf("%d",&hand);
	}while (hand<0||hand>2);
	printf("你选择了");
	switch (hand){
		case 0:printf("石头。\n"); break;
		case 1:printf("剪刀。\n"); break;
		case 2:printf("布。\n");break;
		 }
      return 0;
}      
