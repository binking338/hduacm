#include<stdio.h>
typedef struct {
	int s;
	int e;
} show;

int comp(show* a, show* b){
	return a->e-b->e;
}

int main()
{
	int n,i,e,c;
	show pg[100];
	while(scanf("%d",&n)!=EOF){
		if(!n)break;
		for(i=0; i<n; i++)
		{
			scanf("%d%d",&(pg[i].s),&(pg[i].e));
		}
		qsort(pg,n,sizeof(show),comp);
		c=1;
		e=pg[0].e;
		for(i=1; i<n; i++)
		{
			if(pg[i].s>=e)
			{
				c++;
				e=pg[i].e;
			}
		}
		printf("%d\n", c);
	}
	return 0;
}
