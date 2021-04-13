#include<stdio.h>

// 最初的冒泡排序的模型
void SortOne()
{
    int num[100];
    int n,i;
    int j,temp;
    int count=0;
    printf("please put a number about number of array\n");
    scanf("%d",&n);
    for(i = 0;i < n;i ++)
    {
        scanf("%d",&num[i]);
    }
    // 定义n-1趟轮次
    for(i = 1;i < n ;i ++)
    {
        for(j = 0;j < n - 1;j ++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
        count ++;
    }
    for(i = 0;i < n;i ++)
    {
        printf("%d\t",num[i]);
        //
    }
    printf("%d\n",count);
}

// 优化版的冒泡排序
void SortTwo()
{
   int numb[100];
    int n1,k;
    int w,temp1;
    int count1=0;
    printf("please put a number about number of array\n");
    scanf("%d",&n1);
    for(k = 0;k < n1;k ++)
    {
        scanf("%d",&numb[k]);
    }
    for(k = 0;k < n1-1;k++)
    {
        int flag1 = 1; //定义一个flag作为标记
        for(w = 0;w < n1-1;w ++)
        {
            if(numb[w] > numb[w+1])
            {
                temp1 = numb[w];
                numb[w] = numb[w+1];
                numb[w+1] = temp1;
                flag1 = 0;
            }
        }
        count1 ++;
        if (flag1 == 1)
            break;
    }
    for(k = 0;k < n1;k ++)
    {
        printf("%d\t",numb[k]);
    }
    printf("%d\n",count1);
}

void main()
{
    SortOne();
    //return 0;
    SortTwo();
}
