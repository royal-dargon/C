#include <stdio.h>

int main() {
    int i;
    int v[5];
    for (i = 4; i >= 0; i--) {
        v[i] = i + 1;
    }
    for (i = 0; i < 5; i ++) {
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}