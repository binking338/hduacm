#include <stdio.h>

int main(void)
{
	int t,n,k,i,j;
	double fac[21];
	double s[21][21];
	double sum;
	
	fac[0]=1;
	for(i=1;i<21;i++)
	{
		fac[i]=fac[i-1]*i;
	}
	for(i=1;i<21;i++)
	{
		s[i][0]=0;
		s[i][i]=1;
		for(j=1;j<i;j++)
		{
			s[i][j]=s[i-1][j-1]+(i-1)*s[i-1][j];
		}
	}
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d", &n, &k);
		if(n==1||k==0){  
            printf("0.0000\n");  
            continue;  
        }  
		sum=0;  
        for(i=1;i<=k;i++)  
            sum+=s[n][i]-s[n-1][i-1];  

		printf("%.4lf\n",sum/fac[n]);
	}
	
	return 0;
}
