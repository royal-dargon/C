#include <stdio.h>
#define number 1000
 typedef struct{
        int StuId;
        int Score;
        }student;

// 数据输入/
void getInfo(student a[],int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i].StuId);
        scanf("%d",&a[i].Score);
    }

}

//成绩排序冒泡排序//
void scoresort(student a[],int n)
{
    int i;
    int j;
    for(i = 0; i < n-1; i++)  //n-1趟
    {
        for(j = 0;j < n-1; j++)
        {
            if(a[j].Score < a[j+1].Score)
            {
                int temp = a[j].Score;
                int tool = a[j].StuId;
                a[j].Score = a[j+1].Score;
                a[j].StuId = a[j+1].StuId;
                a[j+1].Score = temp;
                a[j+1].StuId = tool;
            }
        }

    }
}
//降序输出//
void outputacs(student a[],int n)
{
    int i;
    for(i = n-1; i>=0; i--)
    {
        printf("%d\t%d\n",a[i].StuId,a[i].Score);
    }
    printf("\n");
}
//升序输出//
void outputdesc(student a[],int n)
{
    int i;
    for(i = 0;i < n; i++)
    {
        printf("%d\t%d\n",a[i].StuId,a[i].Score);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("请输入一个整数：");scanf("%d",&n);
    student a[number];
    getInfo(a,n);
    scoresort(a,n);
    outputacs(a,n);
    outputdesc(a,n);
    return 0;
}
