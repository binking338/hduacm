#include <stdio.h>
#include <math.h>

int main()
{
	int n,u,d,r;
	while(scanf("%d%d%d",&n,&u,&d)!=EOF){
		if(n==0)return 0;
		r=ceil((n-u)*2.0/(u-d)+1);
		r=r%2?r:r+1;
		printf("%d\n",r);
	}
	return 0;
}
