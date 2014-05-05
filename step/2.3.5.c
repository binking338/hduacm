#include <stdio.h>
#define C 100

int s[101][101][C];

void N(int n, int* buffer)
{
	int i,j,s,k;
	buffer[0]=1;
	k=0;
	for(i=2;i<=n;i++)
	{
		for(j=0;j<C;j++)
		{
			s=buffer[j]*i+k;
			buffer[j]=s%10000;
			k=s/10000;
		}
	}
}

void Multi(int* a, int b, int* c)
{
	int j,s,k;
	k=0;
	for(j=0;j<C;j++)
	{
		s=a[j]*b+k;
		c[j]=s%10000;
		k=s/10000;
	}
}

void Sum(int*a, int* b, int* c)
{
	int i,s,k;
	k=0;
	for(i=0;i<C;i++)
	{
		s=a[i]+b[i]+k;
		c[i]=s%10000;
		k=s/10000;
	}
}

void Zero(int* a)
{
	int i;
	for(i=0;i<C;i++)
	{
		a[i]=0;
	}
}

void PreSolve()
{
	int i,j;
	int t1[C],t2[C];
	s[1][0][0]=1;
	s[1][1][0]=1;
	for(i=2;i<=100;i++)
	{
		Zero(s[i][0]);
		N(i, s[i][0]);
		Zero(s[i][1]);
		Multi(s[i][0],i,s[i][1]);
		for(j=2;j<i;j++)
		{
			Zero(s[i][j]);
			Zero(t1);
			Zero(t2);
			Multi(s[i-1][j],i,t1);
			Multi(s[i][j-1],j,t2);
			Sum(t1,t2,s[i][j]);
		}
		Multi(s[i][j-1],j,s[i][j]);
	}
}

void print_p(int* fn)
{
	int i;
	for(i=C-1;i>=0;i--)
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
	int m,n,i;
	i=1;
	PreSolve();
	while(scanf("%d %d",&m,&n),m!=0||n!=0)
	{
		printf("Test #%d:\n",i++);
		if(m<n)printf("0\n");
		else
		{
			print_p(s[m][n]);
			printf("\n");
		}
	}
	
	return 0;
}
