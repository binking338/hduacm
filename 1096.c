#include <stdio.h>

int main(void)
{
	int t,n,s,v;
	scanf("%d", &t);
	while(t--)
	{
		s=0;
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d", &v);
			s+=v;
		}
		printf("%d\n%s", s, t?"\n":"");
	}
	return 0;
}
