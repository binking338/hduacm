#include <stdio.h>
#include <string.h>
#define BASE 10000
#define MAX 11

void print_bn(int* a, int l) 
{
	int i;
	for(i=l-1; i>0; i--)if(a[i]!=0)break;
	printf("%d",a[i--]);
	for(; i>=0; i--)
	{
		printf("%04d",a[i]);
	}
}

void sum(int* a, int* b, int l, int* out)
{
	int i,s;
	s=0;
	for(i=0; i<l; i++)
	{
		s = a[i] + b[i] + s;
		out[i] = s % BASE;
		s = s / BASE;
	}
}

void zero(int* a, int l)
{
	memset(a,0,l*sizeof(int));
}

int main(void)
{
	int m,n,i,j;
	int h[21][21][MAX];
	
	for(i=1;i<21;i++)
	{
		zero(h[i][0],MAX);
		h[i][0][0]=1;
		for(j=1;j<21;j++)
		{
			zero(h[i][j],MAX);
			if(i<j)h[i][j][0]=0;
			else sum(h[i-1][j],h[i][j-1],MAX,h[i][j]);
		}
	}
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		print_bn(h[m][n],MAX);
		printf("\n");
	}
	return 0;
}
