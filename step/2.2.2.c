# include<stdio.h>

int joseph(int k, int m)
{
	int n;
	int start = 0, end = k-1;
	int kill = 0;
	for(n=k*2; n>k; n--)
	{
		kill = (m-1)%n;
		if(kill>=start&&kill<=end)
		{
			return 0;
		}
		start = ((start - m)%n + n) % n;
		end =((end - m)%n + n) % n;
	}
	return 1;
}

int main(void)
{
	int k,i,j;
    int f[14];
    for(i = 1; i < 14; i++)
        for(j = 1; j; j++)
        {
            if(joseph(i, j))
            {
                f[i] = j;
                break;
            }
        }
	while(scanf("%d",&k)!=EOF,k)
	{
		printf("%d\n",f[k]);
	}
	
	return 0;
}
