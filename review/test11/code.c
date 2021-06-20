#include <stdio.h>
//#include <malloc.h>
#include <stdlib.h>

int* matProduct(int *a,int *b,int rowa,int cola,int rowb,int colb);
int vecProduct(int* a, int *b, int dim);

void main()
{
    int i,j;
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4] = (int(*)[4])matProduct((int*)a,(int*)b,2,3,3,4);
    for(i = 0;i < 2;i ++)
    {
        for(j = 0;j < 4;j ++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    free(p);
}

int* matProduct(int*a,int *b,int rowa,int cola,int rowb,int colb)
{
    int i,j;
    int m,n;
    int count = 0;
    int *p,*arow,*bcol;
    if(cola != rowb){
        printf("it does not work!\n");
        exit(-1);
    }
    arow = (int*)malloc(cola*sizeof(int));
    bcol = (int*)malloc(rowb*sizeof(int));
    p = (int*)malloc(rowa*colb*sizeof(int));
    for(i = 0;i < rowa;i ++){
        for(m = 0;m < 3;m++)
        {
            arow[m] = a[3*i+m];
           
        }
        for(j = 0;j < colb;j ++)
        {
            for(n = 0;n < 3;n ++)
            {
                bcol[n] = b[n*4+j];
            }
            p[count++] = vecProduct(arow,bcol,3);
        }        
    }
    free(arow);
    free(bcol);
    return p;
}

int vecProduct(int* a, int *b, int dim)
{
    int i;
    int res = 0;
    for(i = 0;i < dim;i ++)
    {
        res = res + a[i]*b[i];
    }
    return res;
}