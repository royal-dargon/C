#include <stdio.h>
int main()
{
	int i,j,h,k;
	int v[4][3];
	int m[3][4];
	int f[4][4];
	printf("输入4*3\n");
	for (i=0;i<4;i++) {
		for(j=0;j<3;j++)
			scanf("%d",&v[i][j]);
	}
	printf("输入3*4\n");
	for (h=0;h<3;h++) {
		for(k=0;k<4;k++)
		scanf("%d",&m[h][k]);
	}
        puts("结果是：");
	for (i=0;i<4;i++) {
		for (k=0;k<4;k++) {
		    f[i][k]=0;
		for (j=0;j<3;j++) {
			f[i][k]+=v[i][j]*m[j][k];
		} 
	    }
	}  
	for (i=0;i<4;i++) {
		for (j=0;j<4;j++)
			printf("%d ",f[i][j]);
		printf("\n");
	}
	return 0;
}


