#include <stdio.h>

int gcd(int a, int b)
{
	int t;
	while(t=a%b)
	{
		a=b;
		b=t;
	}
	return b;
}

int main(void)
{
	int t,m,n,i,g,lcm;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&m);
		lcm=1;
		while(m--)
		{
			scanf("%d",&n);
			g=gcd(lcm,n);
			lcm*=n/g;
		}
		printf("%d\n",lcm);
	}
	return 0;
}
