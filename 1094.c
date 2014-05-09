#include <stdio.h>

int main(void)
{
	int n,s,v;
	while(scanf("%d", &n)!=EOF)
	{
		s=0;
		while(n--)
		{
			scanf("%d", &v);
			s+=v;
		}
		printf("%d\n", s);
	}
	
	return 0;
}
