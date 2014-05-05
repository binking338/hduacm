#include <stdio.h>
#include <string.h>
#define BASE 10000
#define MAX 101

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
	h[1][0]=1;
	h[2][0]=4;
	for(i=3; i<=100; i++)
	{
		zero(h[i],MAX);
		mul_sgl(h[i-1],MAX,(2*i-1)*i*2,h[i]);
		div_sgl(h[i],MAX,i+1,h[i]);
	}
	
	while(scanf("%d",&n)!=EOF&&n)
	{
		print_bn(h[n],MAX);
		printf("\n");
	}
	
	return 0;
}
