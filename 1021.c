#include <stdio.h>

int fib(int m)
{
	int n_2=1,n_1=2,n,i;
	if(m==0)return 1;
	if(m==1)return 2;
	for(i=2;i<=m;i++)
	{
		n=(n_2+n_1)%3;
		n_2=n_1;
		n_1=n;
	}
	return n;
}

int main(void)
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%s\n",fib(n)?"no":"yes");
	}
	return 0;
}
