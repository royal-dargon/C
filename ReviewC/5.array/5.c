#include <stdio.h>
#define Number 7
int main() {
    int i;
    int v[Number];
    for (i = 0; i < Number; i++ ){
        printf("v[%d]: ",i);
        scanf("%d",&v[i]);
    }
    for(i = 0; i < Number/2; i ++){
        int temp;
        temp = v[i];
        v[i] = v[Number - i - 1];
        v[Number - 1 - i] = temp;
    }
    puts("倒序排列了。");
    for (i = 0; i < Number; i ++){
        printf("v[%d]:%d\n",i,v[i]);
    }
    return 0;
}