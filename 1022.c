#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,i,j,k,l;
	char o1[10],o2[10],s[10],h[20];
	
	while(scanf("%d %s %s", &n, o1, o2)!=EOF)
	{
		memset(s,0,10);
		i=j=k=l=0;
		while(j<n&&i<n)
		{
			s[k++]=o1[i++];
			h[l++]=1;
			while(k>0 && s[k-1]==o2[j])
			{
				j++;
				k--;
				h[l++]=0;
			}
		}
		if(l==2*n)
		{
			printf("Yes.\n");
			for(l=0;l<2*n;l++)
			{
				if(h[l])printf("in\n");
				else printf("out\n");
			}
			printf("FINISH\n");
		}
		else
		{
			printf("No.\n");
			printf("FINISH\n");
		}
	}
	
	return 0;
}
