#include<stdio.h>

int main(void)
{
	int a,b,n;
	while(scanf("%d",&n)!=EOF){
		while(n--){
			scanf("%d%d",&a,&b);
			printf("%d\n",a+b);
		}
	}
	return 0;
}
