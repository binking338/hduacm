#include <stdio.h>

int main(void)
{
	int n,m,s;
	while(scanf("%d", &n),n)
	{
		s=0;
		while(n--)
		{
			scanf("%d", &m);
			s+=m;
		}
		printf("%d\n",s);
	}
	return 0;
}
