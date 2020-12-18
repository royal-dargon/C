#include<stdio.h>
int main()
{
	int i,j;
	int a=0;
        for ( i = 2;i<=100;i++) {
		for ( j = 2;j<=i;j++) {
			if (i%j==0)
				break;
			if (j==i-1) {
				printf("%d ",i);
				a+=1;
				if (a%5==0)
					printf("\n");
		} 
		
	}
	}
	return 0;
}

