#include<stdio.h>
int sumup (int n){
    int i;
    int sum = 0;
    for (i = 1;i <= n;i ++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    n = sumup(n);
    printf("%d",n);
    return 0;
}