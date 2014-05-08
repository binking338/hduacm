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
	int s,m,i;
	while(scanf("%d %d", &s, &m)!=EOF)
	{
		printf("%10d%10d",s,m);
		if(gcd(s,m)==1)
		{
			printf("    Good Choice\n\n");
		}
		else
		{
			printf("    Bad Choice\n\n");
		}
	}
	return 0;
}
