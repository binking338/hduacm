#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int c[42];
	char str[10];
	
	c[0]=1;
	for(n=1;n<42;n++)
	{
		c[n]=c[n-1]*n%2009;
	}
	
	while(scanf("%s",str)!=EOF)
	{
		if(strlen(str)>2)n=100;
		else
		{
			sscanf(str,"%d",&n);
		}
		if(n>40)n=0;
		else n=c[n];
		printf("%d\n",n);
	}
	
	return 0;
}
