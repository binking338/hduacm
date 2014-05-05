#include<stdio.h>

int comp(int *a, int *b)
{
	return *b-*a;
}

int main()
{
	int n,i,win,lose,t_h,t_l,k_h,k_l;
	int m;
	int t[1000];
	int k[1000];
		
	while(scanf("%d",&n)!=EOF){
		if(!n)break;
		for(i=0; i<n; i++)
		{
			scanf("%d", t+i);
		}
		for(i=0; i<n; i++)
		{
			scanf("%d", k+i);
		}
		qsort(t,n,sizeof(int),comp);
		qsort(k,n,sizeof(int),comp);
		win=0;
		lose=0;
		t_l=k_l=0;
		t_h=k_h=n-1;
		
		while(t_l<=t_h)
		{
			if(t[t_l]>k[k_l])
			{
				win++;
				t_l++;
				k_l++;
			}
			else if(t[t_l]<k[k_l])
			{
				lose++;
				t_h--;
				k_l++;
			}
			else
			{
				if(t[t_h]<k[k_h])
				{
					lose++;
					t_h--;
					k_l++;
				}
				else if(t[t_h]>k[k_h])
				{
					win++;
					t_h--;
					k_h--;
				}
				else
				{
					m=1;
					while(t[t_h-m]==k[k_h-m] && t_h-m>t_l)
					{
						m++;	
					}
					if(t[t_h-m]<k[k_h-m])
					{
						lose++;
						t_h--;
						k_l++;
					}
					else if(t[t_h-m]>k[k_h-m])
					{
						win++;
						t_h--;
						k_h--;
					}
				}
			}
		}
		
		printf("%d\n",(win-lose)*200);
	}
	return 0;
}
