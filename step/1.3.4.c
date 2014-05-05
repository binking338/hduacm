#include<stdio.h>
int comp(int* a, int* b)
{
	return (*a)-(*b);
}

int main()
{
	int t,n,i,j;
	int ab[50][2];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0; i<n; i++)
		{
			scanf("%d%d",ab[i],ab[i]+1);
		}
		qsort(ab,n,sizeof(int)*2,comp);
		for(i=0; i<n; i++)
		{
			while(ab[i][1]--)
			{
				printf(">+");
				for(j=0;j<ab[i][0]-2;j++) printf("-");
				printf("+>\n");
			}
			printf("\n");
		}
	}
	return 0;
}
