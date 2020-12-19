#include<stdio.h>

int cube(int x) {
    return x * x * x;
}
int main() {
    int x;
    printf("亲输入一个数：");
    scanf("%d",&x);
    x = cube(x);
    printf("%d",x);
    return 0;
}