#include <stdio.h>
#include <string.h>

int BF(char s[],char t[]);

void main()
{
	int res;
	char str[] = {"ababcaababbabccbab"};
	char target[] = {"babbab"};
	res = BF(str, target);
	printf("the result is %d",res);
}

int BF(char s[],char t[])
{
	int i = strlen(s);
	int j = strlen(t);
	int m = 0,n = 0;
	while(s[m] != '\0')
	{
		if(s[m] != t[n])
		{
			if(n == 0)
			{
				m++;
			}
			n = 0;	
		}
		else
		{
			if(n == j-1)
			{
				return (m-j+1+1);	
			}
			n ++;
			m ++;
		}
	}
	return 0;
}
