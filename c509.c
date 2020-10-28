#include <stdio.h>
int main()
{
	int n;
	int j;
	int m;
	scanf("%d",&n);
	scanf("%d",&j);
	scanf("%d",&m);
	if(n%4!=0||n%400==0) {
			switch(j) {
			case 1 : printf("%d\n",m);break;
		   	case 2 : printf("%d\n",m+31);break;
		   	case 3 : printf("%d\n",m+59);break;
			case 4 : printf("%d\n",m+90);break;
			case 5 : printf("%d\n",m+120);break;
			case 6 : printf("%d\n",m+151);break;
			case 7 : printf("%d\n",m+181);break;
			case 8 : printf("%d\n",m+212);break;
			case 9 : printf("%d\n",m+243);break;
			case 10 :printf("%d\n",m+273);break;
			case 11 :printf("%d\n",m+304);break;
			case 12 :printf("%d\n",m+334);break;
			}
		}
	else {
			switch(j) {
			case 1 : printf("%d\n",m);break;
			case 2 : printf("%d\n",m+31);break;
			case 3 : printf("%d\n",m+60);break;
			case 4 : printf("%d\n",m+91);break;
			case 5 : printf("%d\n",m+121);break;
			case 6 : printf("%d\n",m+152);break;
			case 7 : printf("%d\n",m+182);break;
			case 8 : printf("%d\n",m+213);break;
			case 9 : printf("%d\n",m+244);break;
			case 10: printf("%d\n",m+274);break;
			case 11 :printf("%d\n",m+305);break;
			case 12 :printf("%d\n",m+345);break;
			}
		}	

		return 0;
}
	

		        

