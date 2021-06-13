#include <stdio.h>

void main()
{
    int temp[4][4] = {{1,8,4,2},{4,9,2,6},{1,6,1,2},{0,6,2,4}};
    int i,j,k;
    int max,min;
    int px,py;
    int flag;
    for(i = 0;i < 4;i ++)
    {   
        int flag = 0;
        max = temp[i][0];
        px = 0;
        py = i;
        for(k = 0; k < 4;k ++)
        {
            if(temp[i][k] > max)
            {
                max = temp[i][k];
                px = k;
            }
        }
        min = temp[py][px];
        for(k = 0;k < 4;k ++)
        {
            if(temp[k][px] < min)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("(%d,%d)%d\n",px,py,temp[py][px]);
        }
    }
}