#include <stdio.h>
#include <string.h>
#define MAXP 101
#define MAXN 301


int find(int pi, int n, int cs[MAXP][MAXN], int* link, int* used)
{
	int ni;
	for(ni=1; ni<=n; ni++)
	{
		if(cs[pi][ni] && !used[ni])
		{
			used[ni]=1;
			if(!link[ni] || dfs(link[ni], n, cs, link, used))
			{
				link[ni]=pi;
				return 1;
			}
		}
	}
	return 0;
}


int main(void)
{
	int t,p,n,i,j,k,s,used[MAXN],link[MAXN],cs[MAXP][MAXN];
	scanf("%d", &t);
	while(t--)
	{
		memset(cs, 0, sizeof(cs));
		memset(link, 0, sizeof(link));
		scanf("%d%d", &p, &n);
		for(i=1;i<=p;i++)
		{
			scanf("%d", &j);
			while(j--)
			{
				scanf("%d", &k);
				cs[i][k]=1;
			}
		}
		s=0;
		for(i=1;i<=p;i++)
		{
			memset(used, 0, sizeof(used));
			s+=dfs(i, n, cs, link, used);
		}
		printf("%s\n", s==p ? "YES" : "NO");
	}
	return 0;
}
