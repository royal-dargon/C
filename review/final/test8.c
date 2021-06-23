#include <stdio.h>
#include <string.h>

int KMP(char s[],char t[]);
void getNext(char t[],int next[]);

void main()
{
	char S[] = {"ababcaababbabccbab"};
	char T[] = {"ababbabc"};
	int res;
	res = KMP(S,T);
	printf("the result is %d\n",res);
}

int KMP(char s[],char t[])
{
	int next[100] = {0};
	getNext(t,next);
	int m = 0;
	int n = strlen(t);
	int j = 0;
	int res = 0;
	while(s[m]!='\0')
	{
		if(s[m]!=t[j])
		{
			if(j == 0)
			{
				m ++;
			}
			j = next[j];	
		}
		else
		{
			m ++;
			j ++;	
		}
		if(j == n)
		{
			res = m-n+1;
			return res;
		}	
	}
	return res;
}

void getNext(char t[],int next[])
{
	int i;
	int j,m;
	for(i = 0;i < strlen(t);i ++)
	{
		for(j = i;j > 0;j --)
		{
			for(m = 0;m < i;m ++)
			{
				if(t[m] != t[i+1-j+m])
					break;
			}
			if(m == i)
			{
				next[i] = j;
				break;		
			}		
		}		
	} 
}
