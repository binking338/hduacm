#include <stdio.h>

int main(void)
{
	int P,m,n,t;
	scanf("%d",&P);
	while(P--)
	{
		scanf("%d %d", &m, &n);
		while(m!=0)
		{
			t=n%m;
			n=m;
			m=t;
		}
		if(n==1)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
