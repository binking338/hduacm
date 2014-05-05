#include<stdio.h>

int comp(int* a,int* b)
{
	return *a-*b;
}

int main()
{
	int n,i;
	int a[10000];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		qsort(a,n,sizeof(int),comp);
		printf("%d\n",a[n/2]);
	}
	return 0;
}
