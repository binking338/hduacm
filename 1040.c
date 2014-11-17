#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
	return (*(int*)a)-(*(int*)b);
}

int main(){
	int t,n,i,s[1000];
	
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		i = n;
		while(i--){
			scanf("%d", s+i);
		}
		qsort(s, n, sizeof(int), cmp);
		printf("%d", s[0]);
		for(i=1;i<n;i++){
			printf(" %d", s[i]);
		}
		printf("\n");
	}
	return 0;
}
