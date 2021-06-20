#include <stdio.h>

void Sort(int temp[],int n,int count);
int SortKind(int temp[], int n);

void main()
{
    int i;
    int count;
    int temp[6] = {1,5,8,4,3,2};
    for (i = 0; i < 6; i++)
    {
        printf("%d ",temp[i]);
    }
    printf("\n");
    count = SortKind(temp,6);
    for (i = 0; i < 6; i++)
    {
        printf("%d ",temp[i]);
    }
    printf("\n");
    Sort(temp,6,count);
}

void Sort(int temp[],int n,int count)
{
    int border,flag = 1,flag1;
    int i,j;
    int tool;
    int m = count-1;
    border = count-1;
    for(i = 0;i < count-1;i ++)
    {   
        flag = 1;
        for(j = 0;j < border;j ++)
        {
            if(temp[j] < temp[j+1])
            {
                tool = temp[j+1];
                temp[j+1] = temp[j];
                temp[j] = tool;
                flag = 0;
                m = j;
            }
        }
        border = m;
        if(flag == 1)
        {
            break;
        }
    }
    border = n-1;
    m = n-1;
    for(i = count;i < n - 1;i ++)
    {   
        flag = 1;
        for(j = count;j < border;j ++)
        {
            if(temp[j] < temp[j+1])
            {
                tool = temp[j+1];
                temp[j+1] = temp[j];
                temp[j] = tool;
                flag = 0;
                m = j;
            }
        }
        border = m;
        if(flag == 1)
        {
            break;
        }
    }
    for(i = 0;i < n;i++)
    {
        printf("%d ",temp[i]);
    }
}

int SortKind(int temp[], int n)
{
    int count = 0;
    int i;
    int tool;
    for(i = 0;i < n;i ++)
    {
        if(temp[i]%2 == 1)
        {
            tool = temp[i];
            temp[i] = temp[count];
            temp[count] = tool;
            count ++;
        }
    }
    return count;
}