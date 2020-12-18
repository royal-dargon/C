#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000000];
    int number[1000];
    int len,i,sum = 0,j = 0;
    printf("ÇëÊäÈë×Ö·û´®:");
    scanf("%s",str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        sum = sum + str[i] - 48;
    }
    i = 0;
    while(sum > 0){
        number[i] = sum%10;
        sum = sum/10;
        i++;
        j++;
    }
    for (i = j-1; i >= 0; i--) {
        switch (number[i])
        {
            case 0 : printf("lin "); break;
            case 1 : printf("yi ");  break;
            case 2 : printf("er ");  break;
            case 3 : printf("san "); break;
            case 4 : printf("si ");  break;
            case 5 : printf("wu ");  break;
            case 6 : printf("liu "); break;
            case 7 : printf("qi ");  break;
            case 8 : printf("ba ");  break;
            case 9 : printf("jiu "); break;

        }
    }
    return 0;

}
