#include<stdio.h>
#include<math.h>

int comp(int* a, int* b){
	return *a-*b;
}

void swap(int* a, int*b){
	int t;
	if(a==b)return;
	t=*a;
	*a=*b;
	*b=t;
}


int main()
{
	int a[4];
	int n[6];
	int i,j,k=0;
	while(scanf("%d%d%d%d",a,a+1,a+2,a+3),(a[0]+a[1]+a[2]+a[3]))
	{
		if(k++)printf("\n");
		qsort(a,4,sizeof(int),comp);
		for(i=0;i<4;i++)
		{
			if((i>0&&a[i]==a[i-1]) || !a[i])continue;
			swap(a,a+i);
			n[0]=a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
			n[1]=a[0]*1000 + a[1]*100 + a[3]*10 + a[2];
			n[2]=a[0]*1000 + a[2]*100 + a[1]*10 + a[3];
			n[3]=a[0]*1000 + a[2]*100 + a[3]*10 + a[1];
			n[4]=a[0]*1000 + a[3]*100 + a[1]*10 + a[2];
			n[5]=a[0]*1000 + a[3]*100 + a[2]*10 + a[1];
			swap(a,a+i);
			qsort(n,6,sizeof(int),comp);
			for(j=0;j<6;j++)
			{
				if(j>0&&n[j]==n[j-1])continue;
				if(j)printf(" ");
				printf("%d",n[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
