#include <stdio.h>

int main(void)
{
	int T,n,m,p,q,i,t;
	int *ht;
	int *ha,h1[64];
	int *hb,h2[64];
	int *hc,h3[64];
	int flag;
	ha=h1;
	hb=h2;
	hc=h3;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		scanf("%d",&m);
		for(i=m-1;i>=0;i--)scanf("%d", ha+i);
		for(i=m;i<n;i++)ha[i]=0;
		scanf("%d",&p);
		for(i=p-1;i>=0;i--)scanf("%d", hb+i);
		for(i=p;i<n;i++)hb[i]=0;
		scanf("%d",&q);
		for(i=q-1;i>=0;i--)scanf("%d", hc+i);
		for(i=q;i<n;i++)hc[i]=0;
		while(1)
		{
			if(m==n || q==n)
			{
				flag=1;
				break;
			}
			else if(p>0 && hb[p-1]==n)
			{
				flag=0;
				break;
			}
			if(m>0 && ha[m-1]==n)
			{
				n--;
				m--;
				ht=hb;
				hb=hc;
				hc=ht;
				t=p;
				p=q;
				q=t;
				continue;
			}
			if(q>0 && hc[q-1]==n)
			{
				n--;
				q--;
				ht=ha;
				ha=hb;
				hb=ht;
				t=m;
				m=p;
				p=t;
				continue;
			}
		}
		if(flag)printf("true\n");
		else printf("false\n");
	}
	
	return 0;
}
