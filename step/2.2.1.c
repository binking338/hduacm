# include<stdio.h> 
# include<math.h>

long fab(long n)
{
	int f0=0,f1=1,fn=0;
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	n--;
	
	while(n--)
	{
		fn=f1+f0;
		f0=f1;
		f1=fn;
	}
	return fn;
}

int main(void)
{
	double k,f=(sqrt(5.0)+1.0)/2.0;
	long n = 0;
	while(scanf("%ld",&n)!=EOF)
	{
		if(n<=20)printf("%ld\n",fab(n));
     	else
	 	{
 			k=(-0.5)*log(5.0)/log(10.0)+((double)n)*log(f)/log(10.0);
 			while(k>=4)
 			{
 				k-=1;
 			}
 			printf("%d\n",(int)(pow(10.0,k)));
		}
		
	}
	
	return 0;
}
