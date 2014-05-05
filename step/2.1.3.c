#include<stdio.h>

int x(int p, int q)
{
	return q==0?p:x(q, p%q);
}

int main()
{
	int p,q;
	while(scanf("%d %d", &p, &q)!=EOF)
	{
		printf("%d\n",p+q-x(p,q));
	}
	return 0;
}
