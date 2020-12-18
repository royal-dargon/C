#include <stdio.h>
#include <string.h>
int dou(int f ,int r)
{
    int t,result = f;
    for (t = 1; t<r; t++) {
        result *= 10;
    }
    return result;
    if (r == 1){
        return result;
    }
}

int main()
{
    char strA[1000],strB[1000];
    int a,b;
    int n,m,i;
    int sumA = 0,sumB = 0,l = 1,q = 1;
    scanf("%s ",strA);
    scanf("%s ",strB);
    scanf("%d %d",&a,&b);
    n = strlen(strA);
    m = strlen(strB);
    for (i = 0; i < n-1; i++) {
        if (strA[i]-48 == a) {
           sumA += dou(a,l);
           l++;
        }
        if (strB[i] == b+48) {
            sumB += dou(b,q);
            q++;
        }
    }
    printf("%d\n",sumA+sumB);
    return 0;
}
