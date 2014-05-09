#include <stdio.h>

int main(void)
{
	int k,a,i;
	while(scanf("%d", &k)!=EOF)
	{
		for(i=1; i<65; i++)
		{
			if((18+k*i)%65==0)
			{
				printf("%d\n",i);
				break;
			}
		}
		if(i==65)printf("no\n");
	}
	
	return 0;
}
