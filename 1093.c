#include <stdio.h>

int main(void)
{
	int n,m,s,v;
	scanf("%d", &m);
	while(m--)
	{
		s=0;
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d", &v);
			s+=v;
		}
		printf("%d\n",s);
	}
	return 0;
}
