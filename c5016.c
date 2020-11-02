#include <stdio.h>
#define number 10000
int main()
{
	int n;
	int A=0,E=0,I=0,O=0,U=0;
	int m=1;
	char t[number];
	scanf("%d",&n);
	while (m<=n) {
		int b ;
		for (b=0; t[b]!='0';b++) {
			scanf("%c",&t[b]);
		}
		
			int c=0;
			for (c=0;c<=n;c++) {
			switch(t[c]){
			case 'a' : A++;break;
		  	case 'e' : E++;break;
		        case 'i' : I++;break;
			case 'o' : O++;break;
			case 'u' : U++;break;
			}
			}
	
		printf("a:%d\n",A);
		printf("e:%d\n",E);
	        printf("i:%d\n",I);
	        printf("o:%d\n",O);
		printf("u:%d\n",U);
		m+=1;
	}
	return 0;
		
}
