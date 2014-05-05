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
	int a,b,c,n;
	scanf("%d",&n);
	while(n>0){
		scanf("%d%d%d",&a,&b,&c);
		if(a<b)swap(&a,&b);
		if(a<c)swap(&a,&c);
		if(b<c)swap(&b,&c);
		if(a==b || b==c)
		{
			printf("perfect\n");
		}
		else if(a*a == b*b+c*c)
		{
			printf("good\n");
		}
		else
		{
			printf("just a triangle\n");
		}
		n--;
	}
	return 0;
}
