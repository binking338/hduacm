#include <stdio.h>

int main(void)
{
	int cache[10000];
	int t,n,i;
	
	cache[0]=2;
	for(i=1; i<10000; i++)
	{
		cache[i]=cache[i-1]+6*i;
	}
	
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		printf("%d\n", cache[n-1]);
	}
	
	return 0;
}
