#include<stdio.h>

int isleap(int y){
	return y%100?(y%4?0:1):(y%400?0:1);
}

int leapcount(int ly, int n){
	int r = 0;
	int y = 0;
	if(n>=97){
		r = n%97;
		y = ly+(n/97*400);
		if(r){
			return leapcount(y, r);
		}
		else{
			return y;
		}
	}
	else{
		while(n){
			ly+=4;
			if(isleap(ly))n--;
		}
		return ly;
	}
}

int main(){
	int T,Y,N;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &Y, &N);
		if(Y%4){
			Y=Y/4*4+4;
		}
		if(!isleap(Y)){
			Y+=4;
		}
		printf("%d\n",leapcount(Y,N-1));
		
	}
	return 0;
}
