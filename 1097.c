#include <stdio.h>

int main(void)
{
	int a,b,r;
	while(scanf("%d %d", &a, &b)!=EOF)
	{
		a%=10;
		r=1;
		while(b)
		{
			if(b%2)
			{
				r=(r*a)%10;
			}
			a=a*a%10;
			b/=2;
		}
		printf("%d\n",r);
	}
	return 0;
}
