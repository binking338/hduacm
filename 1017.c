#include <stdio.h>

int judge(int a, int b, int m)
{
	return (a*a+b*b+m)%(a*b)==0;
}

int count(int m, int n)
{
	int i,j,c;
	c=0;
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(judge(i,j,m))c++;
		}
	}
	return c;
}

int main(void)
{
	int t,m,n,i;
	scanf("%d",&t);
	while(t--)
	{
		i=1;
		while(scanf("%d %d",&n,&m)!=EOF && (m!=0||n!=0))
		{
			printf("Case %d: %d\n",i++,count(m,n));
		}
 		if(t)printf("\n");
	}
	return 0;
}
