#include <stdio.h>
#include <math.h>

void DoQues(int x, double n);
double Do(int x)
{
    double res = x;
    if(x == 1)
    {
        return 1;
    }
    res = res * Do(x-1);
    return res;
}

void main()
{
    int x;
    double n;
    printf("please input a number of x:");
    scanf("%d",&x);
    printf("please input a number of n:");          //n is used to test error
    scanf("%lf",&n);
    DoQues(x, n);
}

void DoQues(int x, double n)
{
    int flag = 1;
    double res = x;
    int count = 1;
    double temp;
    temp = x;
    while(temp >= n)
    {
        count = count + 2;
        res = res - flag*pow(x,count)/Do(count);
        flag = -flag;
        temp = pow(x,count)/Do(count);
        printf("%lf\t",temp);
    }
    printf("sin(%d)=%lf\n",x,res);
    printf("%lf",sin(x));
}