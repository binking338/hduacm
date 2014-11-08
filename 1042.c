#include<stdio.h>
#define MAX 9000
#define UNIT 10000

int* map[101];
int cur=0;

void large_print(int* a){
	int i;
	for(i=MAX-1;i>0;i--){
		if(a[i]>0)break;
	}
	printf("%d",a[i]);
	for(--i;i>=0;i--){
		printf("%04d",a[i]);
	}
	printf("\n");
}

void large_mul(int* a, int b){
	int i;
	int k = 0;
	for(i = 0;i<MAX;i++){
		k = a[i]*b + k;
		a[i] = k % UNIT;
		k = k / UNIT;
	}
}

void large_fac(int*r, int n){
	int i;
	int z;
	if(cur*100<n){
		memcpy(r, map[cur], sizeof(int)*MAX);
		i=cur*100+1;
	}
	else{
		memcpy(r, map[n/100], sizeof(int)*MAX);
		i=n/100*100+1;
	}
	if(i==1)i=2;
	for(;i<=n;i++){
		large_mul(r, i);
		if(i%100==0){
			z = i/100;
			map[z]=(int*)calloc(sizeof(int), MAX);
			memcpy(map[z], r, sizeof(int)*MAX);
			cur = z;
		}
	}
}

void large_init(int* a){
	memset(a, 0, sizeof(int)*MAX);
	a[0] = 1;
}

int main(){
	int n, i;
	int result[MAX];
	map[0] = (int*)calloc(sizeof(int), MAX);
	large_init(map[0]);
	while(scanf("%d", &n)!=EOF){
		large_fac(result, n); 
		large_print(result);
	}
	return 0;	
}
