#include <stdio.h>

void Sort();
void Sort2();

int main()
{
    Sort2();
    return 0;
}

void Sort()
{
    int a[10];
    int flag,temp;
    int i,j;
    for(i = 0;i < 10;i ++){
        printf("write%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i = 1;i < 10;i ++){
        flag = 0;
        for(j = 0;j < 9;j ++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
    printf("the result is:\n");
    for(i = 0;i < 10;i ++)
        printf("%4d",a[i]);
    printf("\n");
}

void Sort2()
{
    int a[5];
    int i,j;
    int min = 0;
    int temp;
    for(i = 0;i < 5;i ++){
        printf("write%d:",i+1);
        scanf("%d",&a[i]);
    }

    for(i = 0;i < 4;i ++){
        min = i;
        for(j = i+1;j < 5;j ++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    printf("the result is:\n");
    for(i = 0;i < 5;i ++)
        printf("%4d",a[i]);
    printf("\n");    
}