#include<stdio.h>

int main(void)
{
	int n,a,s;
	while(scanf("%d",&n)!=EOF, n){
		s=0;
		while(n--){
			scanf("%d",&a);
			s+=a;
		}
		printf("%d\n",s);
	}
	return 0;
}
