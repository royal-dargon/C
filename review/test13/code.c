#include <stdio.h>
#include <malloc.h>

void Way1(int *p,int n);
//void Way2(int *p,int n);
void main()
{
    int n;
    int* p;
    int i;
    printf("please input a number:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i = 0;i < n;i ++)
    {
        scanf("%d",&p[i]);
    }
    Way1(p,n);
    //Way2(p,n);
    free(p);
}

void Way1(int *p,int n)
{
    int i;
    int j;
    int k,temp;
    for(i = 1;i < n;i ++)
    {
        j = 0;
        while(p[j]<p[i]&&j<i)
        {
            j ++;
        }
        if(j != i)
        {
            temp = p[i];
            for(k = i;k > j;k --)
            {
                p[k] = p[k-1];
            }
            p[j] = temp;
        }
    }
    for(i = 0;i < n;i ++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}