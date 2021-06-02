#include <stdio.h>
#include <string.h>

//test memset
void Memset()
{
    int str[10];
    memset(str, 0, 10*sizeof(int));
    printf("the result of memset is %d\n",str[9]);
}
//test gets
void Gets()
{
    char str[10];
    gets(str);
    printf("%s",str);
}

void main()
{
    Memset();
    Gets();
}