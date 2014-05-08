#include <stdio.h>

int main(void)
{
	int i,m;
	char s[1000];
	while(scanf("%s", &s)!=1 || s[0] != '0' )
	{
		for(m=0,i=0; s[i]; i++)
		{
			m+=s[i]-'0';
		}
		printf("%d\n",m%9?m%9:9);
	}
	return 0;
}
