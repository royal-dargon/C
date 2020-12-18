#include<stdio.h>
int main()
{
    double wei,sum;
    printf("请输入邮寄的重量：");
    scanf("%lf",&wei);
    if(wei >30 || wei <= 0)
    {
        printf("fail\n");
    }
    else
    {
        if (wei<=10)
        {
            sum = wei*0.8+0.2;
        }
        else if (wei <= 20)
        {
            sum =wei*0.75+0.2;
        }
        else
        {
            sum =wei*0.7+0.2;
        }
        printf("%.2f",sum);
    }
    return 0;
}
