
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string.h>

int Chess[8] = {0};
int sum = 0;

void try(int n);
int canPlace(int n,int i);
void showResult();

void main()
{
    try(0);
}

void try(int n)
{
    int i;
    for(i = 0;i < 8;i ++)
    {
        if(canPlace(n, i) == 1)
        {
            Chess[n] = i;
            if(n < 7)
            {
                try(n+1);
            } else {
                showResult();
            }
        }
    } 
}

int canPlace(int n,int i)
{
    int j;
    for(j = 0;j < n;j ++)
    {
        if(Chess[j] == i || abs(Chess[j]-i) == abs(n-j))
            return 0;
    }
    return 1;
}

void showResult()
{
    int k;
    printf("this is the %d way:\n",sum+1);
    sum ++;
    for(k = 0;k < 8;k ++)
    {
        printf("the %d line of %d list\n",k+1,Chess[k]+1);
    }
    if(sum % 20 == 0)
    {
        printf("continue!");
        getch();
    }
}

