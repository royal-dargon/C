#include <stdio.h>
#include <string.h>

void getNext(char str[], int next[]);
int KMP(char str[],char tar[]);

void main()
{
    char str[] = {"ababcaababbabccbab"};
    char target[] = {"ababbabc"};
    int res;
    res = KMP(str,target);
    printf("the result is %d\n",res);
}

int KMP(char str[],char tar[])
{
    int i = 0;
    int j = 0;
    int lengh;
    int next[100];
    int res = 0;
    lengh = strlen(tar);
    memset(next,0,100*sizeof(int));
    getNext(tar, next);
    while(str[i] != '\0')
    {
        if(str[i] == tar[j])
        {
            i ++;
            j ++;
        } else {
            if(j == 0)
            {
                i ++;
            }
            j = next[j];
        }
        if(j == lengh)
        {
            res = i - lengh + 1;
            return res;
        }
    }
    return res;
}

void getNext(char str[],int next[])
{
    int j = 0;
    int i,k,m;
    int flag;
    for(i = 0;i < strlen(str);i ++)
    {
        for(k = i;k > 0;k --)
        {
            for(m = 0;m < k;m ++)
            {
                if(str[m] != str[i+1-k+m])
                    break;
            }
            if(m == k)
            {
                next[i] = k;
                break;
            }
        }
    }
    for(i = 0;i < strlen(str);i ++)
    {
        printf("%d  ",next[i]);
    }
    printf("\n");
}

