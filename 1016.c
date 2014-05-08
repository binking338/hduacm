#include <stdio.h>
#include <string.h>

int prime[38]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1};
int visit[21]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int result[21]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void print(int* s, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i) printf(" %d",s[i]);
		else printf("%d",s[i]);
	}
	printf("\n");
}

void dfs(int* s, int* c,int i, int n)
{
	int k;
	if(!i)
	{
		s[0]=1;
		c[1]=1;
		dfs(s,c,i+1,n);
		c[1]=0;
	}
	else if(i<n-1)
	{
		
		for(k=2;k<=n;k++)
		{
			if(!c[k] && prime[s[i-1]+k])
			{
				s[i]=k;
				c[k]=1;
				dfs(s,c,i+1,n);
				c[k]=0;
			}
		}
	}
	else if(i==n-1)
	{
		for(k=2;k<=n;k++)
		{
			if(!c[k] && prime[s[i-1]+k] && prime[k+1])
			{
				s[i]=k;
				c[k]=1;
				dfs(s,c,i+1,n);
				c[k]=0;
			}
		}
	}
	else if(i==n)
	{
		print(s, n);
	}
}

int main(void)
{
	int n,i;
	i=1;
	while(scanf("%d", &n)!=EOF)
	{
		printf("Case %d:\n",i++);
		
		memset(result,0,21);
		memset(visit,0,21);
		
		dfs(result,visit,0,n);
		printf("\n");
	}
	return 0;
}
