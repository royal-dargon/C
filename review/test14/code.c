#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

int canPlace(int *p,int i,int j,int n);
void showRes(int *p,int n);
int test(int n)
{
    int i;
    int flag = 1;
    for(i = 2;i < sqrt(n);i ++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        return 1;
    else
    {
        return 0;
    }
}

void main()
{
    int n;
    int i = 1;
    int j;
    int *circle;
    printf("please input a number:");
    scanf("%d",&n);
    circle = (int*)malloc(sizeof(int)*n);
    memset(circle,0,sizeof(int)*n);
    circle[0] = 1;
    while(i >= 1)
    {
        for(j = circle[i]+1;j <= n;j ++)
        {
            if(canPlace(circle,i,j,n) == 1)
            {
                circle[i] = j;
                break;
            }
        }
        if(j > n)
        {
            circle[i--] = 0;
        }
        else if(i == n-1)
        {
            showRes(circle,n);
            circle[i--];
        }
        else {
            i ++;
        }
    }
    free(circle);
    printf("finished!");
}

void showRes(int *p, int n)
{
    int i;
    for(i = 0;i < n;i ++)
    {
        printf("%d,",p[i]);
    }
    printf("\n");
}

int canPlace(int *p,int i,int j,int n)
{
    int k,flag;
    for(k = 0;k < i;k ++)
    {
        if(p[k] == j)
        {
            return 0;
        }
    }
    flag = test(p[i-1]+j);
    if(flag == 1 && i == n-1)
    {
        flag = test(j+p[0]);
    }
    return flag;
}