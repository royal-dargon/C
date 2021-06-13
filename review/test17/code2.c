#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
    int n;
    int str[100];
    int num[10];
    int temp;
    int k;
    int i = 0;
    memset(num, 0 , 10*sizeof(int));
    //printf("please input how many words do you want:");
    //scanf("%d",&n);
    //str = (char*)malloc(n*sizeof(char));
    do{
        scanf("%d",&str[i]);
        //printf("%c",str[i]);
        temp = str[i];
        printf("%d",temp);
        num[temp-1] ++;
        i ++;
    }while(temp > 0);

    for(k = 0;k < 10;k ++){
        printf("(%d : %d)\t",k+1,num[k]);
    }
}