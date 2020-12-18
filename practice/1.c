#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int power(int f ,int r)
{
    int t,result = f;


    for (t = 1; t<r; t++) {
        result *= 10;
    }
        return result;

} //处理几次方 

int MyAtoi(const char* c)
{
    int m[100];
	int n,i,sum = 0,temp;
    int r = 0 ,flag = 1;//定义flag处理负数 
    while (*c == ' ')
    {
    	c++;
	}  //处理空格 
    while ((*c>='0'&&*c<='9')||*c=='-')
    {
    	if (*c == '-')
    	{
    		flag = -1;
    		c++;
		}
        m[r] = *(c++)-48 ;
        r++;
    }
    temp = 1;
    for (i = r-1; i >= 0;i--){
        sum += power(m[i],temp);
        temp++;
    }
    return flag*sum;
}
int main()
{
    char *str;
    char j[100];   
    int n,inter;
    printf("请输入一个字符串:");
    scanf("%s",j);
    str = j;   //注意类型相同 
    n = MyAtoi(str);
    inter = atoi(str);
    printf("%d %d",n,inter);
    return 0;
}
