#include <stdio.h>

int test(int a);

void main()
{
    int n;
    int res;
    printf("write n:");
    scanf("%d",&n);
    res = test(n);
    printf("result is %d\n",res);
}

int test(int a)
{
    int i;
    int temp;
    if(a != 1)
    {
        temp = test(a-1) * a;
    }
    else
    {
        temp = 1;
    }
    return temp;
}