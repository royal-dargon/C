#include<stdio.h>

// �����ð�������ģ��
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
    // ����n-1���ִ�
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

// �Ż����ð������
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
        int flag1 = 1; //����һ��flag��Ϊ���
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
