#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
	int t;
	while(t=a%b)
	{
		a=b;
		b=t;
	}
	return b;
}

void add(int n1, int p1, int q1, int p2, int q2, int* n, int* p, int* q)
{
	int a,b,g;
	a=p1*q2+p2*q1;
	b=q1*q2;
	*n=a/b+n1;
	a=a%b;
	g=gcd(a,b);
	*p=a/g;
	*q=b/g;
}

void print(int n, int p, int q)
{
	int nl, fl, i;
	if(!p)
	{
		printf("%d\n", n);
	}
	else
	{
		nl=log10(n)+1;
		fl=log10(q)+1;
		for(i=0; i<=nl; i++)printf(" ");
		printf("%d\n",p);
		printf("%d ",n);
		for(i=0; i<fl; i++)printf("-");
		printf("\n");
		for(i=0; i<=nl; i++)printf(" ");
		printf("%d\n",q);
	}
}

int main(void)
{
	int n[23],p[23],q[23],i,j;
	for(i=1; i<=22; i++)
	{
		n[i]=1;p[i]=0;q[i]=1;
		for(j=1;j<i;j++)
		{
			add(n[i],p[i],q[i],i,j,n+i,p+i,q+i);
		}
	}
	
	while(scanf("%d", &i)!=EOF)
	{
		print(n[i],p[i],q[i]);
	}
	
	return 0;
}
