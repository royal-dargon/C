#include<stdio.h>
struct student {
    char name[100];
    char number[100];
    int  score;
};
int main()
{
    struct student a[100];
    int n,i,j;
    scanf("%d",&n);
    for (i = 0; i < n; i ++) {
        scanf("%s %s %d",a[i].name,a[i].number,&a[i].score);
    }
    for (i = 0; i < n - 1; i ++ ) {
        for (j = 0; j < n-1; j ++) {
            if (a[j].score > a[j+1].score) {
                struct student temp = a[j+1];
                a[j+1] = a[j];
                a[j]  =  temp;
            }
        }
    }
    printf("%s %s\n",a[n-1].name,a[n-1].number);
    printf("%s %s\n",a[0].name,a[0].number);
    return 0;
}