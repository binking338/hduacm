#include <stdio.h>
#include <math.h>

int main(void)
{
	int t,n,i;
	double sum;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(i=2;i<=n;i++)
			sum+=log10(i);
		printf("%d\n",(int)sum+1);
	}
	
	return 0;
}
