#include <stdio.h>
#include <math.h>

void Way(double x)
{
    double f1,f2;
    double x0;
    while(1){
        x0 = x;
        f1 = cos(x) - x;
        f2 = -sin(x) - 1;
        x = x - f1/f2;
        if (fabs(x-x0)  <= 0.001)
            break;
    }
    printf("the result is %.5f",x);
}

void main()
{
    double x = 3.1415/4;
    Way(x);
}