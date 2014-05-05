#include<stdio.h>

int main(void)
{
	int n,m,a,s;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		s=0;
		while(m--)
		{
			scanf("%d",&a);
			s+=a;
		}
		printf("%d\n",s);
		if(n)printf("\n");
	}
	return 0;
}
