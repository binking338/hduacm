#include <stdio.h>
#include <string.h>
#define BASE 10000
#define PFMT "%04d"
#define MAX 101

void print_bn(int* a, int l) 
{
	int i;
	for(i=l-1; i>0; i--)if(a[i]!=0)break;
	printf("%d",a[i--]);
	for(; i>=0; i--)
	{
		printf(PFMT,a[i]);
	}
}

void mul_sgl(int* a, int l, int b, int* out)
{
	int i,s;
	s=0;
	for(i=0; i<l; i++)
	{
		s = a[i] * b + s;
		out[i] = s % BASE;
		s = s / BASE;
	}
}

void div_sgl(int* a, int l, int b, int* out)
{
	int i,s;
	s=0;
	for(i=l-1; i>=0; i--)
	{
		s = s*BASE + a[i];
		out[i] = s / b;
		s = s % b;
	}
}

void zero(int* a, int l)
{
	memset(a,0,l*sizeof(int));
}

int main(void)
{
	int n,i;
	int h[101][MAX];
	zero(h[1],MAX);
	zero(h[2],MAX);
	zero(h[3],MAX);
	h[1][0]=1;
	h[2][0]=2;
	h[3][0]=5;
	for(i=4; i<=100; i++)
	{
		zero(h[i],MAX);
		mul_sgl(h[i-1],MAX,2*(2*i-1),h[i]);
		div_sgl(h[i],MAX,i+1,h[i]);
	}
	
	while(scanf("%d",&n)!=EOF && n!=-1)
	{
		print_bn(h[n],MAX);
		printf("\n");
	}
}
