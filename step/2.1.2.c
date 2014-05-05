#include<stdio.h>
#include<math.h>

int is_prime(int d)
{
	int i;
	for(i=2;i<=(int)sqrt(d);i++)
	{
		if(!(d%i))return 0;
	}
	return 1;
}

int main(void)
{
	int n,d,c;
	while(scanf("%d",&n)!=EOF && n){
		c=0;
		while(n>0)
		{
			scanf("%d",&d);
			if(is_prime(d))c++;
			n--;
		}
		printf("%d\n",c);
	}
}
