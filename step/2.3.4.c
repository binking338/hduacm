#include <stdio.h>

int f[7500][670];

void fib()
{
	int i,j,s,k;
	f[1][0]=1;
	f[2][0]=1;
	f[3][0]=1;
	f[4][0]=1;
	k=0;
	for(i=5;i<7500;i++)
	{
		for(j=0;j<670;j++)
		{
			s=f[i-1][j]+f[i-2][j]+f[i-3][j]+f[i-4][j]+k;
			f[i][j]=s%10000;
			k=s/10000;
		}
	}
}

void print(int n)
{
	int i;
	int* fn;
	fn = f[n];
	for(i=669;i>=0;i--)
	{
		if(fn[i]!=0)
		{
	 		break;
		}
	}
	printf("%d",fn[i--]);
	for(;i>=0;i--)
	{
		printf("%04d",fn[i]);
	}
}

int main(void)
{
	int n;
	fib();
	while(scanf("%d",&n)!=EOF)
	{
		print(n);
		printf("\n");
	}
}
