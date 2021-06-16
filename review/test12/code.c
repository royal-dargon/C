#include <stdio.h>
#include <malloc.h>
#include <string.h>

char* Creat(int n);
char* SaveNum(char* str);

void main()
{
    char* str;
    char* Nstr;
    int n;
    printf("please input a number:\n");
    scanf("%d",&n);
    str = Creat(n);
    Nstr = SaveNum(str);
    printf("%s",Nstr);
    free(Nstr);
}

char* Creat(int n)
{
    int i = 0;
    char* str;
    str = (char*)malloc(sizeof(char)*(n+1));
    while(i <= n)
    {
        *(str+i) = getchar();
        i = i + 1;
    }
    *(str+i) = '\0';
    return str; 
}

char* SaveNum(char* str)
{
    int count = 0;
    int number = 0;
    int flag = 0;
    int i = 0;
    char* nstr;
    while(*(str+i) != '\0')
    {
        if(*(str+i) >= '0' && *(str+i) <= '9')
        {
            number = number + 1;
            if(flag == 0)
            {
                count = count + 1;
                flag = 1;
            }
        } else {
            flag = 0;
        }
        i ++;
    }
    nstr = (char*)malloc(sizeof(char)*(count+number));
    i = 0;
    flag = 0;
    int j = 0;
    while(*(str+i) != '\0')
    {
        if(*(str+i) >= '0' && *(str+i) <= '9')
        {
            *(nstr+j) = *(str+i);
            flag = 1;
            j ++;
            i ++; 
        } else {
            if(flag == 1 && count > 1)
            {
                *(nstr+j) = ',';
                j ++;
                count --;
            }
            flag = 0;
            i ++;
        }
    }
    *(nstr+j) = '\0';
    free(str);
    return nstr;
}