#include <stdio.h>

void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int a,b,c,n,i=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d%d%d",&a,&b,&c);
		if(a<b)swap(&a,&b);
		if(a<c)swap(&a,&c);
		if(a*a == b*b+c*c)
		{
			printf("Scenario #%d:\nyes\n", ++i);
		}
		else
		{
			printf("Scenario #%d:\nno\n", ++i);
		}
		printf("\n");
	}
	return 0;
}
