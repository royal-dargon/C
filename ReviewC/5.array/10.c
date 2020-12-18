#include <stdio.h>
int main() {
    int a[4][3];
    int b[3][4];
    int c[4][4];
    int m,n;
    for(m = 0; m < 4; m ++){
        for(n = 0; n < 3; n++){
            scanf("%d",&a[m][n]);
        }
    }
    for(m = 0; m < 3; m ++){
        for(n = 0; n < 4; n ++){
            scanf("%d",&b[m][n]);
        }
    }
    for(m = 0; m < 4; m ++){
        for(n = 0; n < 4; n ++){
            int sum = 0;
            int i;
            for(i = 0; i < 3; i ++){
                sum += a[m][i] * b[i][n];
            }
            c[m][n] = sum;
        }
    }
    for(m = 0; m < 4; m ++){
        for(n = 0; n < 4; n ++){
            printf("%d ",c[m][n]);
        }
        printf("\n");
    }
    return 0;
}