#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main(void)
{
	int t,n,i;
	double s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		
		s=0;
		if(n<20)
		{
			for(i=1;i<=n;i++)
			{
				s+=log10(i);
			}
		}
		else
		{
			s=(0.5*log(2*PI*n)+n*log(n)-n)/log(10);
		}
		printf("%d\n",(int)s+1);
	}
}
