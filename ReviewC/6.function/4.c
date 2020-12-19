#include<stdio.h>

int pow2(int x){
    return x * x;
}

int pow4(int x){
    x = pow2(x) * pow2(x);
    return x;
}

int main(){
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    x = pow4(x);
    printf("%d",x);
    return 0;
}