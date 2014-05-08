#include <stdio.h>

int main(void)
{
	int n,i,c;
	char txt[10001];
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s",txt);
		i=0;
		while(txt[i++])
		{
			c=1;
			while(txt[i]==txt[i-1])
			{
				i++;
				c++;
			}
			if(c>1)printf("%d%c",c,txt[i-1]);
			else printf("%c",txt[i-1]);
		}
		printf("\n");
	}
	
	return 0;
}
