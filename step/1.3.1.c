#include <stdio.h>

int main()
{
	int T,N,i,j,max,temp;
	int s[200],t[200];
	int opt[200];
	scanf("%d",&T);
	while(T>0){
		scanf("%d",&N);
		for(i=0; i<200; i++) opt[i]=0;
		for(i=0; i<N; i++)
		{
			scanf("%d%d",&s[i],&t[i]);
			s[i]=(s[i]+1)/2-1;
			t[i]=(t[i]+1)/2-1;
			if(s[i]>t[i])
			{
				temp = s[i];
				s[i]=t[i];
				t[i]=temp;
			}
			for(j=s[i]; j<=t[i]; j++)
			{
				opt[j]++;
			}
		}
		max=0;
		for(i=0; i<200; i++)
		{
			if(opt[i]>max)max=opt[i];
		}
		printf("%d\n",10*max);
		T--;
	}
	return 0;
}
