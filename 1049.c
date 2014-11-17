#include<stdio.h>
#include<math.h>

int main(){
	int n,u,d;
	while(scanf("%d %d %d", &n, &u, &d), !(n==0 && u==0 && d==0)){
		n = n-u;
		u = u-d;
		printf("%d\n", (n/u + (n%u?1:0))*2+1);
	}
	
	return 0;	
}
