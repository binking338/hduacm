#include <stdio.h>

int main(void)
{
	int i,j,n,max,v[1000],s[1000];
	while(scanf("%d",&n)!=EOF && n)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",v+i);
		}
		max=v[0];
		s[0]=v[0];
		for(i=1;i<n;i++)
		{
			s[i]=v[i];
			for(j=0;j<i;j++)
			{
				if(v[i]>v[j] && s[i] < s[j]+v[i])
				{
					s[i]=s[j]+v[i];
					if(max<s[i])max=s[i];
				}
			}
		}
		printf("%d\n",max);
	}
	
	return 0;
}
