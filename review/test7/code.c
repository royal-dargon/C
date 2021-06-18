#include <stdio.h>
#include <string.h>

int BF(char S[], char T[]);
void MaxAffixLength(char T[], int next[]);

void main()
{
    char str[] = "ababcababbabccbab";
    char target[] = "ababbabc";
    char str1[] = {"ababaaababaa"};
    int Next[100];
    int res;
    
    res = BF(str, target);
    printf("the result is %d\n",res);
    MaxAffixLength(str1, Next);
}

int BF(char S[], char T[])
{
    int lenth;
    int i = 0;
    int j = 0;
    lenth = strlen(T);
    while(S[i] != '\0')
    {
        if(S[i] == T[j])
        {
            i ++;
            j ++;
        } else {
            if(j == 0)
            {
                i ++;
            }
            j = 0;
        }
        if(j == lenth)
        {
            int res;
            res = i - lenth + 1;
            return res;
        }
    }
    return 0;
}

void MaxAffixLength(char T[], int next[])
{
    char temp[100];
    int lenth;
    int i,j,k;
    int count;
    int flag;
    lenth = strlen(T);
    memset(next, 0 ,lenth*sizeof(int));
   
    for(i = 1;i <= lenth;i ++)
    {
        flag = 0;
        for(j = i-1;j > 0;j --)
        {
            for(k = 0; k < j; k ++)
            {
                if(T[k] != T[i-j+k])
                {
                    break;
                }
                if(k == j-1)
                {
                    next[i-1] = j;
                    flag = 1;
                }
            }
            if(flag == 1)
                break;
        }
    }
    for(i = 0;i < lenth;i ++)
    {
        printf("%d  ",next[i]);
    }
}