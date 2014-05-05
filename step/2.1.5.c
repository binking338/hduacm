#include<stdio.h>
#include<string.h>
#define MAX 500001

int lpf[MAX];

int main(void)
{
	int t,n,cnt,i,j;
	memset(lpf,0,sizeof(lpf));
	for(i=2;i<MAX;i++)
	{
		for(j=(i*2);j<MAX;j+=i)
		{
			lpf[j]+=i;
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",lpf[n]+1);
	}
	
	return 0;
}
