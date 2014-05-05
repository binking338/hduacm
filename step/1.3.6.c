#include<stdio.h>
int comp(int* a,int* b)
{
	return *a-*b;
}

int main()
{
	int n,i,sa,sb;
	int a[100];
	int b[100];
	while(scanf("%d",&n),n){
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",b+i);
		}
		qsort(a,n,sizeof(int),comp);
		qsort(b,n,sizeof(int),comp);
		sa=0;
		sb=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>b[i]){sa+=2;sb+=0;}
			else if(a[i]==b[i]){sa+=1;sb+=1;}
			else {sa+=0;sb+=2;}
		}
		printf("%d vs %d\n", sa, sb);
	}
	return 0;
}
