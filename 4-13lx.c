#include <stdio.h>
int main()
{
  int i;
  int sum=0;
  int n;
  printf("请输入一个整数：");scanf("%d",&n);
  for (i=0;i<=n;i++){
	  sum+=i;  
  }
	  printf("1到%d的和是%d。",n,sum);
   return 0;
}
