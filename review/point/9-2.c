#include <stdio.h>

void main()
{
    char str[10];
    int k;
    char *p;
    
    p = str;
    for(k = 0;k < 10;k ++)
    {
        *p ++ = 'A' + k;
        //printf("%3c",*(p+k));
    }
    p = str;
    for(k = 0;k < 10;k ++)
        printf("%3c",*(p+k));
}