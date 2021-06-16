#include <stdio.h>

int Value[5] = {6,3,5,4,6};
int Weight[5] = {2,2,6,5,4};
int Submit[5] = {0};

int try(int w,int n);

void main()
{
    int max;
    int i;
    max = try(10,0);
    for(i = 0;i < 5;i ++)
    {
        printf("%d\t",Submit[i]);
    }
    printf("the max value is %d",max);
}

int try(int w,int n)
{
    int v1,v2;
    if(w < 0 || n >= 5)
    {
        return 0;
    }
    if(Weight[n] > w)
    {
        return try(w,n+1);
    } else {
        v1 = try(w,n+1);
        v2 = try(w-Weight[n],n+1)+Value[n];
        if(v1 > v2)
        {
            Submit[n] = 0;
            return v1;
        } else {
            Submit[n] = 1;
            return v2;
        }
    }
}