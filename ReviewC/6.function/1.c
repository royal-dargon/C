#include<stdio.h>
int Min3(int a, int b, int c) {
    int min;
    if(a < b){
        min = a;
    } else {
        min = b;
    }
    if(min < c){
        return min;
    } else {
        return c;
    }
}
int main() {
    int a,b,c,m;
    printf("请输入：");
    scanf("%d%d%d",&a,&b,&c);
    m = Min3(a,b,c);
    printf("%d\n",m);
    return 0;
}

