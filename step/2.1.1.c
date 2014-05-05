#include<stdio.h>

int main(void)
{
	int m,n,a,b,c;
	while(scanf("%d%d",&m,&n)!=EOF){
		if(m<n){a=n;b=m;}
		else {a=m;b=n;}
		while(c=a%b)
		{
			a=b;
			b=c;
		}
		printf("%d\n",m*n/b);
	}
}
