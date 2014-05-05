#include<stdio.h>
#include<string.h>
#define MAX 1000000

int lpf[MAX];

int main(void)
{
	int n,cnt,i,j;
	memset(lpf,0,sizeof(lpf));
	lpf[2]=1;
	for(i=4;i<MAX;i+=2)
	{
		lpf[i] = 1;	
	}
	cnt=2;
	for(i=3;i<MAX;i+=2)
	{
		if(lpf[i])continue;
		lpf[i]=cnt++;
		for(j=(i*2);j<MAX;j+=i)
		{
			lpf[j]=lpf[i];
		}
	}
	
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",lpf[n]);
	}
	
	return 0;
}
