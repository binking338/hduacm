#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	double n; 
	double a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf",&n);
		a = n*log10(n);
		b = pow(10.0,a-floor(a));
		printf("%.0lf\n",floor(b));
	}
}
